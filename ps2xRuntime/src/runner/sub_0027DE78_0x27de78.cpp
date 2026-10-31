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

// Function: sub_0027DE78
// Address: 0x27de78 - 0x27df38
void sub_0027DE78_0x27de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DE78_0x27de78");
#endif

    switch (ctx->pc) {
        case 0x27de90u: goto label_27de90;
        case 0x27de98u: goto label_27de98;
        case 0x27deb8u: goto label_27deb8;
        case 0x27dec8u: goto label_27dec8;
        case 0x27deecu: goto label_27deec;
        case 0x27df04u: goto label_27df04;
        case 0x27df18u: goto label_27df18;
        default: break;
    }

    ctx->pc = 0x27de78u;

    // 0x27de78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27de78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27de7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27de80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27de84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27de88: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27DE88u;
    SET_GPR_U32(ctx, 31, 0x27DE90u);
    ctx->pc = 0x27DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE88u;
    // 0x27de8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27DE88u, 0x27DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE90u;
label_27de90:
    // 0x27de90: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27DE90u;
    SET_GPR_U32(ctx, 31, 0x27DE98u);
    ctx->pc = 0x27DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE90u;
    // 0x27de94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DE90u, 0x27DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE98u;
label_27de98:
    // 0x27de98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27de98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de9c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27de9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27dea0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27dea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27dea4: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x27dea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x27dea8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27dea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27deac: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x27deacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x27deb0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27DEB0u;
    SET_GPR_U32(ctx, 31, 0x27DEB8u);
    ctx->pc = 0x27DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEB0u;
    // 0x27deb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27DEB0u, 0x27DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEB8u;
label_27deb8:
    // 0x27deb8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27DEB8u;
    {
        const bool branch_taken_0x27deb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEB8u;
        // 0x27debc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deb8) {
            ctx->pc = 0x27DF24u;
            goto label_27df24;
        }
    }
    ctx->pc = 0x27DEC0u;
    // 0x27dec0: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27DEC0u;
    SET_GPR_U32(ctx, 31, 0x27DEC8u);
    ctx->pc = 0x27DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEC0u;
    // 0x27dec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27DEC0u, 0x27DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEC8u;
label_27dec8:
    // 0x27dec8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27dec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27decc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DECCu;
    {
        const bool branch_taken_0x27decc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DECCu;
        // 0x27ded0: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27decc) {
            ctx->pc = 0x27DEDCu;
            goto label_27dedc;
        }
    }
    ctx->pc = 0x27DED4u;
    // 0x27ded4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DED4u;
    {
        const bool branch_taken_0x27ded4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DED4u;
        // 0x27ded8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ded4) {
            ctx->pc = 0x27DF24u;
            goto label_27df24;
        }
    }
    ctx->pc = 0x27DEDCu;
label_27dedc:
    // 0x27dedc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x27dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x27dee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27dee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dee4: 0xc089998  jal         func_226660
    ctx->pc = 0x27DEE4u;
    SET_GPR_U32(ctx, 31, 0x27DEECu);
    ctx->pc = 0x27DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEE4u;
    // 0x27dee8: 0x34a5001f  ori         $a1, $a1, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27DEE4u, 0x27DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEECu;
label_27deec:
    // 0x27deec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27DEECu;
    {
        const bool branch_taken_0x27deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEECu;
        // 0x27def0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deec) {
            ctx->pc = 0x27DF24u;
            goto label_27df24;
        }
    }
    ctx->pc = 0x27DEF4u;
    // 0x27def4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DEF4u;
    {
        const bool branch_taken_0x27def4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEF4u;
        // 0x27def8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27def4) {
            ctx->pc = 0x27DF0Cu;
            goto label_27df0c;
        }
    }
    ctx->pc = 0x27DEFCu;
    // 0x27defc: 0xc0893f4  jal         func_224FD0
    ctx->pc = 0x27DEFCu;
    SET_GPR_U32(ctx, 31, 0x27DF04u);
    ctx->pc = 0x27DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEFCu;
    // 0x27df00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FD0u, 0x27DEFCu, 0x27DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF04u;
label_27df04:
    // 0x27df04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DF04u;
    {
        const bool branch_taken_0x27df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF04u;
        // 0x27df08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df04) {
            ctx->pc = 0x27DF20u;
            goto label_27df20;
        }
    }
    ctx->pc = 0x27DF0Cu;
label_27df0c:
    // 0x27df0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27df0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df10: 0xc098720  jal         func_261C80
    ctx->pc = 0x27DF10u;
    SET_GPR_U32(ctx, 31, 0x27DF18u);
    ctx->pc = 0x27DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF10u;
    // 0x27df14: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x27DF10u, 0x27DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF18u;
label_27df18:
    // 0x27df18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DF18u;
    {
        const bool branch_taken_0x27df18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF18u;
        // 0x27df1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df18) {
            ctx->pc = 0x27DF24u;
            goto label_27df24;
        }
    }
    ctx->pc = 0x27DF20u;
label_27df20:
    // 0x27df20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27df20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27df24:
    // 0x27df24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27df24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27df28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27df28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27df2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27df2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27df30: 0x3e00008  jr          $ra
    ctx->pc = 0x27DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF30u;
        // 0x27df34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DF38u;
}
