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

// Function: sub_0047E950
// Address: 0x47e950 - 0x47e9f0
void sub_0047E950_0x47e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E950_0x47e950");
#endif

    switch (ctx->pc) {
        case 0x47e950u: goto label_47e950;
        case 0x47e954u: goto label_47e954;
        case 0x47e958u: goto label_47e958;
        case 0x47e95cu: goto label_47e95c;
        case 0x47e960u: goto label_47e960;
        case 0x47e964u: goto label_47e964;
        case 0x47e968u: goto label_47e968;
        case 0x47e96cu: goto label_47e96c;
        case 0x47e970u: goto label_47e970;
        case 0x47e974u: goto label_47e974;
        case 0x47e978u: goto label_47e978;
        case 0x47e97cu: goto label_47e97c;
        case 0x47e980u: goto label_47e980;
        case 0x47e984u: goto label_47e984;
        case 0x47e988u: goto label_47e988;
        case 0x47e98cu: goto label_47e98c;
        case 0x47e990u: goto label_47e990;
        case 0x47e994u: goto label_47e994;
        case 0x47e998u: goto label_47e998;
        case 0x47e99cu: goto label_47e99c;
        case 0x47e9a0u: goto label_47e9a0;
        case 0x47e9a4u: goto label_47e9a4;
        case 0x47e9a8u: goto label_47e9a8;
        case 0x47e9acu: goto label_47e9ac;
        case 0x47e9b0u: goto label_47e9b0;
        case 0x47e9b4u: goto label_47e9b4;
        case 0x47e9b8u: goto label_47e9b8;
        case 0x47e9bcu: goto label_47e9bc;
        case 0x47e9c0u: goto label_47e9c0;
        case 0x47e9c4u: goto label_47e9c4;
        case 0x47e9c8u: goto label_47e9c8;
        case 0x47e9ccu: goto label_47e9cc;
        case 0x47e9d0u: goto label_47e9d0;
        case 0x47e9d4u: goto label_47e9d4;
        case 0x47e9d8u: goto label_47e9d8;
        case 0x47e9dcu: goto label_47e9dc;
        case 0x47e9e0u: goto label_47e9e0;
        case 0x47e9e4u: goto label_47e9e4;
        case 0x47e9e8u: goto label_47e9e8;
        case 0x47e9ecu: goto label_47e9ec;
        default: break;
    }

    ctx->pc = 0x47e950u;

label_47e950:
    // 0x47e950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47e954:
    // 0x47e954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47e958:
    // 0x47e958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47e95c:
    // 0x47e95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47e95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e960:
    // 0x47e960: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47e964:
    // 0x47e964: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_47e968:
    if (ctx->pc == 0x47E968u) {
        ctx->pc = 0x47E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E964u;
        // 0x47e968: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E96Cu;
        goto label_47e96c;
    }
    ctx->pc = 0x47E964u;
    {
        const bool branch_taken_0x47e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e964) {
            ctx->pc = 0x47E968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E964u;
            // 0x47e968: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E978u;
            goto label_47e978;
        }
    }
    ctx->pc = 0x47E96Cu;
label_47e96c:
    // 0x47e96c: 0x40f809  jalr        $v0
label_47e970:
    if (ctx->pc == 0x47E970u) {
        ctx->pc = 0x47E974u;
        goto label_47e974;
    }
    ctx->pc = 0x47E96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E974u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E96Cu, 0x47E974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E974u;
label_47e974:
    // 0x47e974: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e978:
    // 0x47e978: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_47e97c:
    if (ctx->pc == 0x47E97Cu) {
        ctx->pc = 0x47E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E978u;
        // 0x47e97c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E980u;
        goto label_47e980;
    }
    ctx->pc = 0x47E978u;
    {
        const bool branch_taken_0x47e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e978) {
            ctx->pc = 0x47E97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E978u;
            // 0x47e97c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E980u;
            goto label_47e980;
        }
    }
    ctx->pc = 0x47E980u;
label_47e980:
    // 0x47e980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47e980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e984:
    // 0x47e984: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_47e988:
    if (ctx->pc == 0x47E988u) {
        ctx->pc = 0x47E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E984u;
        // 0x47e988: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E98Cu;
        goto label_47e98c;
    }
    ctx->pc = 0x47E984u;
    {
        const bool branch_taken_0x47e984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E984u;
        // 0x47e988: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e984) {
            ctx->pc = 0x47E9CCu;
            goto label_47e9cc;
        }
    }
    ctx->pc = 0x47E98Cu;
label_47e98c:
    // 0x47e98c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e990:
    // 0x47e990: 0x24c6ad18  addiu       $a2, $a2, -0x52E8
    ctx->pc = 0x47e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946072));
label_47e994:
    // 0x47e994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e998:
    // 0x47e998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x47e998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_47e99c:
    // 0x47e99c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47e99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e9a0:
    // 0x47e9a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e9a4:
    // 0x47e9a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47e9a8:
    // 0x47e9a8: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e9ac:
    // 0x47e9ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x47e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47e9b0:
    // 0x47e9b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x47e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_47e9b4:
    // 0x47e9b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x47e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47e9b8:
    // 0x47e9b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x47e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47e9bc:
    // 0x47e9bc: 0xc1201bc  jal         func_4806F0
label_47e9c0:
    if (ctx->pc == 0x47E9C0u) {
        ctx->pc = 0x47E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9BCu;
        // 0x47e9c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E9C4u;
        goto label_47e9c4;
    }
    ctx->pc = 0x47E9BCu;
    SET_GPR_U32(ctx, 31, 0x47E9C4u);
    ctx->pc = 0x47E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E9BCu;
    // 0x47e9c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4806F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4806F0u, 0x47E9BCu, 0x47E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E9C4u;
label_47e9c4:
    // 0x47e9c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_47e9c8:
    if (ctx->pc == 0x47E9C8u) {
        ctx->pc = 0x47E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9C4u;
        // 0x47e9c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E9CCu;
        goto label_47e9cc;
    }
    ctx->pc = 0x47E9C4u;
    {
        const bool branch_taken_0x47e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9C4u;
        // 0x47e9c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e9c4) {
            ctx->pc = 0x47E9E0u;
            goto label_47e9e0;
        }
    }
    ctx->pc = 0x47E9CCu;
label_47e9cc:
    // 0x47e9cc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47e9d0:
    // 0x47e9d0: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x47e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_47e9d4:
    // 0x47e9d4: 0x40f809  jalr        $v0
label_47e9d8:
    if (ctx->pc == 0x47E9D8u) {
        ctx->pc = 0x47E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9D4u;
        // 0x47e9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E9DCu;
        goto label_47e9dc;
    }
    ctx->pc = 0x47E9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E9DCu);
        ctx->pc = 0x47E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9D4u;
        // 0x47e9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E9D4u, 0x47E9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E9DCu;
label_47e9dc:
    // 0x47e9dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47e9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e9e0:
    // 0x47e9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e9e4:
    // 0x47e9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47e9e8:
    // 0x47e9e8: 0x3e00008  jr          $ra
label_47e9ec:
    if (ctx->pc == 0x47E9ECu) {
        ctx->pc = 0x47E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9E8u;
        // 0x47e9ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E9F0u;
        goto label_fallthrough_0x47e9e8;
    }
    ctx->pc = 0x47E9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E9E8u;
        // 0x47e9ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47e9e8:
    ctx->pc = 0x47E9F0u;
}
