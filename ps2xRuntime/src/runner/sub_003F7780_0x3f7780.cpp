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

// Function: sub_003F7780
// Address: 0x3f7780 - 0x3f7830
void sub_003F7780_0x3f7780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7780_0x3f7780");
#endif

    switch (ctx->pc) {
        case 0x3f7780u: goto label_3f7780;
        case 0x3f7784u: goto label_3f7784;
        case 0x3f7788u: goto label_3f7788;
        case 0x3f778cu: goto label_3f778c;
        case 0x3f7790u: goto label_3f7790;
        case 0x3f7794u: goto label_3f7794;
        case 0x3f7798u: goto label_3f7798;
        case 0x3f779cu: goto label_3f779c;
        case 0x3f77a0u: goto label_3f77a0;
        case 0x3f77a4u: goto label_3f77a4;
        case 0x3f77a8u: goto label_3f77a8;
        case 0x3f77acu: goto label_3f77ac;
        case 0x3f77b0u: goto label_3f77b0;
        case 0x3f77b4u: goto label_3f77b4;
        case 0x3f77b8u: goto label_3f77b8;
        case 0x3f77bcu: goto label_3f77bc;
        case 0x3f77c0u: goto label_3f77c0;
        case 0x3f77c4u: goto label_3f77c4;
        case 0x3f77c8u: goto label_3f77c8;
        case 0x3f77ccu: goto label_3f77cc;
        case 0x3f77d0u: goto label_3f77d0;
        case 0x3f77d4u: goto label_3f77d4;
        case 0x3f77d8u: goto label_3f77d8;
        case 0x3f77dcu: goto label_3f77dc;
        case 0x3f77e0u: goto label_3f77e0;
        case 0x3f77e4u: goto label_3f77e4;
        case 0x3f77e8u: goto label_3f77e8;
        case 0x3f77ecu: goto label_3f77ec;
        case 0x3f77f0u: goto label_3f77f0;
        case 0x3f77f4u: goto label_3f77f4;
        case 0x3f77f8u: goto label_3f77f8;
        case 0x3f77fcu: goto label_3f77fc;
        case 0x3f7800u: goto label_3f7800;
        case 0x3f7804u: goto label_3f7804;
        case 0x3f7808u: goto label_3f7808;
        case 0x3f780cu: goto label_3f780c;
        case 0x3f7810u: goto label_3f7810;
        case 0x3f7814u: goto label_3f7814;
        case 0x3f7818u: goto label_3f7818;
        case 0x3f781cu: goto label_3f781c;
        case 0x3f7820u: goto label_3f7820;
        case 0x3f7824u: goto label_3f7824;
        case 0x3f7828u: goto label_3f7828;
        case 0x3f782cu: goto label_3f782c;
        default: break;
    }

    ctx->pc = 0x3f7780u;

label_3f7780:
    // 0x3f7780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f7780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f7784:
    // 0x3f7784: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f7784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3f7788:
    // 0x3f7788: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f7788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3f778c:
    // 0x3f778c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f778cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7790:
    // 0x3f7790: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f7790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f7794:
    // 0x3f7794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f7794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f7798:
    // 0x3f7798: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f7798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f779c:
    // 0x3f779c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f77a0:
    // 0x3f77a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f77a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f77a4:
    // 0x3f77a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f77a8:
    // 0x3f77a8: 0x40f809  jalr        $v0
label_3f77ac:
    if (ctx->pc == 0x3F77ACu) {
        ctx->pc = 0x3F77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77A8u;
        // 0x3f77ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F77B0u;
        goto label_3f77b0;
    }
    ctx->pc = 0x3F77A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F77B0u);
        ctx->pc = 0x3F77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77A8u;
        // 0x3f77ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F77A8u, 0x3F77B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F77B0u;
label_3f77b0:
    // 0x3f77b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f77b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f77b4:
    // 0x3f77b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f77b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f77b8:
    // 0x3f77b8: 0xc0ea12a  jal         func_3A84A8
label_3f77bc:
    if (ctx->pc == 0x3F77BCu) {
        ctx->pc = 0x3F77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77B8u;
        // 0x3f77bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F77C0u;
        goto label_3f77c0;
    }
    ctx->pc = 0x3F77B8u;
    SET_GPR_U32(ctx, 31, 0x3F77C0u);
    ctx->pc = 0x3F77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F77B8u;
    // 0x3f77bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F77B8u, 0x3F77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F77C0u;
label_3f77c0:
    // 0x3f77c0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f77c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f77c4:
    // 0x3f77c4: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3f77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3f77c8:
    // 0x3f77c8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f77cc:
    // 0x3f77cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f77ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f77d0:
    // 0x3f77d0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f77d4:
    // 0x3f77d4: 0xc0e858c  jal         func_3A1630
label_3f77d8:
    if (ctx->pc == 0x3F77D8u) {
        ctx->pc = 0x3F77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77D4u;
        // 0x3f77d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F77DCu;
        goto label_3f77dc;
    }
    ctx->pc = 0x3F77D4u;
    SET_GPR_U32(ctx, 31, 0x3F77DCu);
    ctx->pc = 0x3F77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F77D4u;
    // 0x3f77d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F77D4u, 0x3F77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F77DCu;
label_3f77dc:
    // 0x3f77dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f77dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f77e0:
    // 0x3f77e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f77e4:
    // 0x3f77e4: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f77e8:
    // 0x3f77e8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3f77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f77ec:
    // 0x3f77ec: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f77f0:
    // 0x3f77f0: 0xc0cd4ee  jal         func_3353B8
label_3f77f4:
    if (ctx->pc == 0x3F77F4u) {
        ctx->pc = 0x3F77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77F0u;
        // 0x3f77f4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F77F8u;
        goto label_3f77f8;
    }
    ctx->pc = 0x3F77F0u;
    SET_GPR_U32(ctx, 31, 0x3F77F8u);
    ctx->pc = 0x3F77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F77F0u;
    // 0x3f77f4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F77F0u, 0x3F77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F77F8u;
label_3f77f8:
    // 0x3f77f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f77f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f77fc:
    // 0x3f77fc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3f77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3f7800:
    // 0x3f7800: 0x3c04c1c4  lui         $a0, 0xC1C4
    ctx->pc = 0x3f7800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49604 << 16));
label_3f7804:
    // 0x3f7804: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3f7804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3f7808:
    // 0x3f7808: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3f7808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3f780c:
    // 0x3f780c: 0x34845c2d  ori         $a0, $a0, 0x5C2D
    ctx->pc = 0x3f780cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23597);
label_3f7810:
    // 0x3f7810: 0xc045c8e  jal         func_117238
label_3f7814:
    if (ctx->pc == 0x3F7814u) {
        ctx->pc = 0x3F7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7810u;
        // 0x3f7814: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7818u;
        goto label_3f7818;
    }
    ctx->pc = 0x3F7810u;
    SET_GPR_U32(ctx, 31, 0x3F7818u);
    ctx->pc = 0x3F7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7810u;
    // 0x3f7814: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3F7810u, 0x3F7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7818u;
label_3f7818:
    // 0x3f7818: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f7818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f781c:
    // 0x3f781c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f781cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f7820:
    // 0x3f7820: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f7820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7824:
    // 0x3f7824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f7824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7828:
    // 0x3f7828: 0x3e00008  jr          $ra
label_3f782c:
    if (ctx->pc == 0x3F782Cu) {
        ctx->pc = 0x3F782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7828u;
        // 0x3f782c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7830u;
        goto label_fallthrough_0x3f7828;
    }
    ctx->pc = 0x3F7828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7828u;
        // 0x3f782c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7828:
    ctx->pc = 0x3F7830u;
}
