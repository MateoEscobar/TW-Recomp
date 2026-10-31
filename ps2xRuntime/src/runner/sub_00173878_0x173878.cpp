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

// Function: sub_00173878
// Address: 0x173878 - 0x173928
void sub_00173878_0x173878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173878_0x173878");
#endif

    switch (ctx->pc) {
        case 0x173878u: goto label_173878;
        case 0x17387cu: goto label_17387c;
        case 0x173880u: goto label_173880;
        case 0x173884u: goto label_173884;
        case 0x173888u: goto label_173888;
        case 0x17388cu: goto label_17388c;
        case 0x173890u: goto label_173890;
        case 0x173894u: goto label_173894;
        case 0x173898u: goto label_173898;
        case 0x17389cu: goto label_17389c;
        case 0x1738a0u: goto label_1738a0;
        case 0x1738a4u: goto label_1738a4;
        case 0x1738a8u: goto label_1738a8;
        case 0x1738acu: goto label_1738ac;
        case 0x1738b0u: goto label_1738b0;
        case 0x1738b4u: goto label_1738b4;
        case 0x1738b8u: goto label_1738b8;
        case 0x1738bcu: goto label_1738bc;
        case 0x1738c0u: goto label_1738c0;
        case 0x1738c4u: goto label_1738c4;
        case 0x1738c8u: goto label_1738c8;
        case 0x1738ccu: goto label_1738cc;
        case 0x1738d0u: goto label_1738d0;
        case 0x1738d4u: goto label_1738d4;
        case 0x1738d8u: goto label_1738d8;
        case 0x1738dcu: goto label_1738dc;
        case 0x1738e0u: goto label_1738e0;
        case 0x1738e4u: goto label_1738e4;
        case 0x1738e8u: goto label_1738e8;
        case 0x1738ecu: goto label_1738ec;
        case 0x1738f0u: goto label_1738f0;
        case 0x1738f4u: goto label_1738f4;
        case 0x1738f8u: goto label_1738f8;
        case 0x1738fcu: goto label_1738fc;
        case 0x173900u: goto label_173900;
        case 0x173904u: goto label_173904;
        case 0x173908u: goto label_173908;
        case 0x17390cu: goto label_17390c;
        case 0x173910u: goto label_173910;
        case 0x173914u: goto label_173914;
        case 0x173918u: goto label_173918;
        case 0x17391cu: goto label_17391c;
        case 0x173920u: goto label_173920;
        case 0x173924u: goto label_173924;
        default: break;
    }

    ctx->pc = 0x173878u;

label_173878:
    // 0x173878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17387c:
    // 0x17387c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_173880:
    // 0x173880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x173880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_173884:
    // 0x173884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_173888:
    // 0x173888: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17388c:
    // 0x17388c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_173890:
    // 0x173890: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_173894:
    // 0x173894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_173898:
    // 0x173898: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_17389c:
    // 0x17389c: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1738a0:
    // 0x1738a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1738a4:
    // 0x1738a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1738a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1738a8:
    // 0x1738a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1738a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1738ac:
    // 0x1738ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1738b0:
    // 0x1738b0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1738b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1738b4:
    // 0x1738b4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1738b8:
    // 0x1738b8: 0x40f809  jalr        $v0
label_1738bc:
    if (ctx->pc == 0x1738BCu) {
        ctx->pc = 0x1738BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738B8u;
        // 0x1738bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738C0u;
        goto label_1738c0;
    }
    ctx->pc = 0x1738B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1738C0u);
        ctx->pc = 0x1738BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738B8u;
        // 0x1738bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1738B8u, 0x1738C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1738C0u;
label_1738c0:
    // 0x1738c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1738c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1738c4:
    // 0x1738c4: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1738c8:
    // 0x1738c8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1738c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1738cc:
    // 0x1738cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1738ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1738d0:
    // 0x1738d0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1738d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1738d4:
    // 0x1738d4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1738d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1738d8:
    // 0x1738d8: 0x60f809  jalr        $v1
label_1738dc:
    if (ctx->pc == 0x1738DCu) {
        ctx->pc = 0x1738DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D8u;
        // 0x1738dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738E0u;
        goto label_1738e0;
    }
    ctx->pc = 0x1738D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1738E0u);
        ctx->pc = 0x1738DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D8u;
        // 0x1738dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1738D8u, 0x1738E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1738E0u;
label_1738e0:
    // 0x1738e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1738e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1738e4:
    // 0x1738e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1738e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1738e8:
    // 0x1738e8: 0x24060435  addiu       $a2, $zero, 0x435
    ctx->pc = 0x1738e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1077));
label_1738ec:
    // 0x1738ec: 0xc137a4e  jal         func_4DE938
label_1738f0:
    if (ctx->pc == 0x1738F0u) {
        ctx->pc = 0x1738F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738ECu;
        // 0x1738f0: 0x24a51b30  addiu       $a1, $a1, 0x1B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738F4u;
        goto label_1738f4;
    }
    ctx->pc = 0x1738ECu;
    SET_GPR_U32(ctx, 31, 0x1738F4u);
    ctx->pc = 0x1738F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738ECu;
    // 0x1738f0: 0x24a51b30  addiu       $a1, $a1, 0x1B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE938u, 0x1738ECu, 0x1738F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738F4u;
label_1738f4:
    // 0x1738f4: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x1738f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1738f8:
    // 0x1738f8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1738f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1738fc:
    // 0x1738fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173900:
    // 0x173900: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x173900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_173904:
    // 0x173904: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x173904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_173908:
    // 0x173908: 0x60f809  jalr        $v1
label_17390c:
    if (ctx->pc == 0x17390Cu) {
        ctx->pc = 0x17390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173908u;
        // 0x17390c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173910u;
        goto label_173910;
    }
    ctx->pc = 0x173908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173910u);
        ctx->pc = 0x17390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173908u;
        // 0x17390c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173908u, 0x173910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173910u;
label_173910:
    // 0x173910: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x173910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173914:
    // 0x173914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173918:
    // 0x173918: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x173918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17391c:
    // 0x17391c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173920:
    // 0x173920: 0x3e00008  jr          $ra
label_173924:
    if (ctx->pc == 0x173924u) {
        ctx->pc = 0x173924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173920u;
        // 0x173924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173928u;
        goto label_fallthrough_0x173920;
    }
    ctx->pc = 0x173920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173920u;
        // 0x173924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173920:
    ctx->pc = 0x173928u;
}
