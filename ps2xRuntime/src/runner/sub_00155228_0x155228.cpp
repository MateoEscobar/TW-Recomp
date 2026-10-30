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

// Function: sub_00155228
// Address: 0x155228 - 0x1552b0
void sub_00155228_0x155228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155228_0x155228");
#endif

    switch (ctx->pc) {
        case 0x15524cu: goto label_15524c;
        case 0x155268u: goto label_155268;
        case 0x155280u: goto label_155280;
        case 0x15528cu: goto label_15528c;
        case 0x155298u: goto label_155298;
        default: break;
    }

    ctx->pc = 0x155228u;

    // 0x155228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15522c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x155230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x155234: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x155234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x155238: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x155238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15523c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15523cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155244: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x155244u;
    SET_GPR_U32(ctx, 31, 0x15524Cu);
    ctx->pc = 0x155248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155244u;
    // 0x155248: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155244u, 0x15524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15524Cu;
label_15524c:
    // 0x15524c: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x15524cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
    // 0x155250: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x155250u;
    {
        const bool branch_taken_0x155250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155250) {
            ctx->pc = 0x155254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155250u;
            // 0x155254: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15529Cu;
            goto label_15529c;
        }
    }
    ctx->pc = 0x155258u;
    // 0x155258: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155258u;
    {
        const bool branch_taken_0x155258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155258u;
        // 0x15525c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155258) {
            ctx->pc = 0x155270u;
            goto label_155270;
        }
    }
    ctx->pc = 0x155260u;
    // 0x155260: 0xc07f86e  jal         func_1FE1B8
    ctx->pc = 0x155260u;
    SET_GPR_U32(ctx, 31, 0x155268u);
    ctx->pc = 0x155264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155260u;
    // 0x155264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1B8u, 0x155260u, 0x155268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155268u;
label_155268:
    // 0x155268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155268u;
    {
        const bool branch_taken_0x155268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155268u;
        // 0x15526c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155268) {
            ctx->pc = 0x155284u;
            goto label_155284;
        }
    }
    ctx->pc = 0x155270u;
label_155270:
    // 0x155270: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155270u;
    {
        const bool branch_taken_0x155270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x155270) {
            ctx->pc = 0x155274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155270u;
            // 0x155274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155284u;
            goto label_155284;
        }
    }
    ctx->pc = 0x155278u;
    // 0x155278: 0xc07f86e  jal         func_1FE1B8
    ctx->pc = 0x155278u;
    SET_GPR_U32(ctx, 31, 0x155280u);
    ctx->pc = 0x15527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155278u;
    // 0x15527c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1B8u, 0x155278u, 0x155280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155280u;
label_155280:
    // 0x155280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155284:
    // 0x155284: 0xc057a0e  jal         func_15E838
    ctx->pc = 0x155284u;
    SET_GPR_U32(ctx, 31, 0x15528Cu);
    ctx->pc = 0x155288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155284u;
    // 0x155288: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E838u, 0x155284u, 0x15528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15528Cu;
label_15528c:
    // 0x15528c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15528cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x155290: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x155290u;
    SET_GPR_U32(ctx, 31, 0x155298u);
    ctx->pc = 0x155294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155290u;
    // 0x155294: 0x248466d0  addiu       $a0, $a0, 0x66D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x155290u, 0x155298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155298u;
label_155298:
    // 0x155298: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x155298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15529c:
    // 0x15529c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15529cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1552a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1552a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1552a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1552a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1552A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552A8u;
        // 0x1552ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1552A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1552B0u;
}
