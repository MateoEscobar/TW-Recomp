#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4210
// Address: 0x3c4210 - 0x3c4280
void sub_003C4210_0x3c4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4210_0x3c4210");
#endif

    switch (ctx->pc) {
        case 0x3c4210u: goto label_3c4210;
        case 0x3c4214u: goto label_3c4214;
        case 0x3c4218u: goto label_3c4218;
        case 0x3c421cu: goto label_3c421c;
        case 0x3c4220u: goto label_3c4220;
        case 0x3c4224u: goto label_3c4224;
        case 0x3c4228u: goto label_3c4228;
        case 0x3c422cu: goto label_3c422c;
        case 0x3c4230u: goto label_3c4230;
        case 0x3c4234u: goto label_3c4234;
        case 0x3c4238u: goto label_3c4238;
        case 0x3c423cu: goto label_3c423c;
        case 0x3c4240u: goto label_3c4240;
        case 0x3c4244u: goto label_3c4244;
        case 0x3c4248u: goto label_3c4248;
        case 0x3c424cu: goto label_3c424c;
        case 0x3c4250u: goto label_3c4250;
        case 0x3c4254u: goto label_3c4254;
        case 0x3c4258u: goto label_3c4258;
        case 0x3c425cu: goto label_3c425c;
        case 0x3c4260u: goto label_3c4260;
        case 0x3c4264u: goto label_3c4264;
        case 0x3c4268u: goto label_3c4268;
        case 0x3c426cu: goto label_3c426c;
        case 0x3c4270u: goto label_3c4270;
        case 0x3c4274u: goto label_3c4274;
        case 0x3c4278u: goto label_3c4278;
        case 0x3c427cu: goto label_3c427c;
        default: break;
    }

    ctx->pc = 0x3c4210u;

label_3c4210:
    // 0x3c4210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c4214:
    // 0x3c4214: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c4218:
    // 0x3c4218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c421c:
    // 0x3c421c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c4220:
    // 0x3c4220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c4224:
    // 0x3c4224: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c4224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c4228:
    // 0x3c4228: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c4228u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c422c:
    // 0x3c422c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c4230:
    // 0x3c4230: 0x40f809  jalr        $v0
label_3c4234:
    if (ctx->pc == 0x3C4234u) {
        ctx->pc = 0x3C4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4230u;
        // 0x3c4234: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4238u;
        goto label_3c4238;
    }
    ctx->pc = 0x3C4230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4238u);
        ctx->pc = 0x3C4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4230u;
        // 0x3c4234: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4230u, 0x3C4238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4238u;
label_3c4238:
    // 0x3c4238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c4238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c423c:
    // 0x3c423c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3c423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3c4240:
    // 0x3c4240: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_3c4244:
    if (ctx->pc == 0x3C4244u) {
        ctx->pc = 0x3C4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4240u;
        // 0x3c4244: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4248u;
        goto label_3c4248;
    }
    ctx->pc = 0x3C4240u;
    {
        const bool branch_taken_0x3c4240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4240u;
        // 0x3c4244: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4240) {
            ctx->pc = 0x3C426Cu;
            goto label_3c426c;
        }
    }
    ctx->pc = 0x3C4248u;
label_3c4248:
    // 0x3c4248: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3c4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c424c:
    // 0x3c424c: 0x2c820041  sltiu       $v0, $a0, 0x41
    ctx->pc = 0x3c424cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_3c4250:
    // 0x3c4250: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3c4254:
    if (ctx->pc == 0x3C4254u) {
        ctx->pc = 0x3C4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4250u;
        // 0x3c4254: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4258u;
        goto label_3c4258;
    }
    ctx->pc = 0x3C4250u;
    {
        const bool branch_taken_0x3c4250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4250) {
            ctx->pc = 0x3C4254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4250u;
            // 0x3c4254: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4270u;
            goto label_3c4270;
        }
    }
    ctx->pc = 0x3C4258u;
label_3c4258:
    // 0x3c4258: 0xc0e96ae  jal         func_3A5AB8
label_3c425c:
    if (ctx->pc == 0x3C425Cu) {
        ctx->pc = 0x3C4260u;
        goto label_3c4260;
    }
    ctx->pc = 0x3C4258u;
    SET_GPR_U32(ctx, 31, 0x3C4260u);
    ctx->pc = 0x3A5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5AB8u, 0x3C4258u, 0x3C4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4260u;
label_3c4260:
    // 0x3c4260: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c4260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4264:
    // 0x3c4264: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3c4264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3c4268:
    // 0x3c4268: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c4268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c426c:
    // 0x3c426c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c426cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4270:
    // 0x3c4270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c4270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4274:
    // 0x3c4274: 0x3e00008  jr          $ra
label_3c4278:
    if (ctx->pc == 0x3C4278u) {
        ctx->pc = 0x3C4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4274u;
        // 0x3c4278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C427Cu;
        goto label_3c427c;
    }
    ctx->pc = 0x3C4274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4274u;
        // 0x3c4278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C427Cu;
label_3c427c:
    // 0x3c427c: 0x0  nop
    ctx->pc = 0x3c427cu;
    // NOP
    ctx->pc = 0x3c4280u;
}
