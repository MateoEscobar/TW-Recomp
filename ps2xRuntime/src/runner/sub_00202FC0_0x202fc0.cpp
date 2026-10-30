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

// Function: sub_00202FC0
// Address: 0x202fc0 - 0x203040
void sub_00202FC0_0x202fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202FC0_0x202fc0");
#endif

    switch (ctx->pc) {
        case 0x202fc0u: goto label_202fc0;
        case 0x202fc4u: goto label_202fc4;
        case 0x202fc8u: goto label_202fc8;
        case 0x202fccu: goto label_202fcc;
        case 0x202fd0u: goto label_202fd0;
        case 0x202fd4u: goto label_202fd4;
        case 0x202fd8u: goto label_202fd8;
        case 0x202fdcu: goto label_202fdc;
        case 0x202fe0u: goto label_202fe0;
        case 0x202fe4u: goto label_202fe4;
        case 0x202fe8u: goto label_202fe8;
        case 0x202fecu: goto label_202fec;
        case 0x202ff0u: goto label_202ff0;
        case 0x202ff4u: goto label_202ff4;
        case 0x202ff8u: goto label_202ff8;
        case 0x202ffcu: goto label_202ffc;
        case 0x203000u: goto label_203000;
        case 0x203004u: goto label_203004;
        case 0x203008u: goto label_203008;
        case 0x20300cu: goto label_20300c;
        case 0x203010u: goto label_203010;
        case 0x203014u: goto label_203014;
        case 0x203018u: goto label_203018;
        case 0x20301cu: goto label_20301c;
        case 0x203020u: goto label_203020;
        case 0x203024u: goto label_203024;
        case 0x203028u: goto label_203028;
        case 0x20302cu: goto label_20302c;
        case 0x203030u: goto label_203030;
        case 0x203034u: goto label_203034;
        case 0x203038u: goto label_203038;
        case 0x20303cu: goto label_20303c;
        default: break;
    }

    ctx->pc = 0x202fc0u;

label_202fc0:
    // 0x202fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_202fc4:
    // 0x202fc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202fc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202fc8:
    // 0x202fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_202fcc:
    // 0x202fcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_202fd0:
    // 0x202fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202fd4:
    // 0x202fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_202fd8:
    // 0x202fd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_202fdc:
    // 0x202fdc: 0x0  nop
    ctx->pc = 0x202fdcu;
    // NOP
label_202fe0:
    // 0x202fe0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x202fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_202fe4:
    // 0x202fe4: 0x0  nop
    ctx->pc = 0x202fe4u;
    // NOP
label_202fe8:
    // 0x202fe8: 0x0  nop
    ctx->pc = 0x202fe8u;
    // NOP
label_202fec:
    // 0x202fec: 0x0  nop
    ctx->pc = 0x202fecu;
    // NOP
label_202ff0:
    // 0x202ff0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_202ff4:
    if (ctx->pc == 0x202FF4u) {
        ctx->pc = 0x202FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FF0u;
        // 0x202ff4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FF8u;
        goto label_202ff8;
    }
    ctx->pc = 0x202FF0u;
    {
        const bool branch_taken_0x202ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FF0u;
        // 0x202ff4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ff0) {
            ctx->pc = 0x202FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202fe0;
        }
    }
    ctx->pc = 0x202FF8u;
label_202ff8:
    // 0x202ff8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202ffc:
    // 0x202ffc: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_203000:
    // 0x203000: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_203004:
    // 0x203004: 0x24060254  addiu       $a2, $zero, 0x254
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
label_203008:
    // 0x203008: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_20300c:
    // 0x20300c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20300cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203010:
    // 0x203010: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_203014:
    // 0x203014: 0x40f809  jalr        $v0
label_203018:
    if (ctx->pc == 0x203018u) {
        ctx->pc = 0x203018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203014u;
        // 0x203018: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20301Cu;
        goto label_20301c;
    }
    ctx->pc = 0x203014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20301Cu);
        ctx->pc = 0x203018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203014u;
        // 0x203018: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203014u, 0x20301Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20301Cu;
label_20301c:
    // 0x20301c: 0xc080b74  jal         func_202DD0
label_203020:
    if (ctx->pc == 0x203020u) {
        ctx->pc = 0x203020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20301Cu;
        // 0x203020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203024u;
        goto label_203024;
    }
    ctx->pc = 0x20301Cu;
    SET_GPR_U32(ctx, 31, 0x203024u);
    ctx->pc = 0x203020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20301Cu;
    // 0x203020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202DD0u, 0x20301Cu, 0x203024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203024u;
label_203024:
    // 0x203024: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x203024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_203028:
    // 0x203028: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x203028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20302c:
    // 0x20302c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20302cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203030:
    // 0x203030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203034:
    // 0x203034: 0x3e00008  jr          $ra
label_203038:
    if (ctx->pc == 0x203038u) {
        ctx->pc = 0x203038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203034u;
        // 0x203038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20303Cu;
        goto label_20303c;
    }
    ctx->pc = 0x203034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203034u;
        // 0x203038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20303Cu;
label_20303c:
    // 0x20303c: 0x0  nop
    ctx->pc = 0x20303cu;
    // NOP
    ctx->pc = 0x203040u;
}
