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

// Function: sub_002CE960
// Address: 0x2ce960 - 0x2ce9e0
void sub_002CE960_0x2ce960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE960_0x2ce960");
#endif

    switch (ctx->pc) {
        case 0x2ce960u: goto label_2ce960;
        case 0x2ce964u: goto label_2ce964;
        case 0x2ce968u: goto label_2ce968;
        case 0x2ce96cu: goto label_2ce96c;
        case 0x2ce970u: goto label_2ce970;
        case 0x2ce974u: goto label_2ce974;
        case 0x2ce978u: goto label_2ce978;
        case 0x2ce97cu: goto label_2ce97c;
        case 0x2ce980u: goto label_2ce980;
        case 0x2ce984u: goto label_2ce984;
        case 0x2ce988u: goto label_2ce988;
        case 0x2ce98cu: goto label_2ce98c;
        case 0x2ce990u: goto label_2ce990;
        case 0x2ce994u: goto label_2ce994;
        case 0x2ce998u: goto label_2ce998;
        case 0x2ce99cu: goto label_2ce99c;
        case 0x2ce9a0u: goto label_2ce9a0;
        case 0x2ce9a4u: goto label_2ce9a4;
        case 0x2ce9a8u: goto label_2ce9a8;
        case 0x2ce9acu: goto label_2ce9ac;
        case 0x2ce9b0u: goto label_2ce9b0;
        case 0x2ce9b4u: goto label_2ce9b4;
        case 0x2ce9b8u: goto label_2ce9b8;
        case 0x2ce9bcu: goto label_2ce9bc;
        case 0x2ce9c0u: goto label_2ce9c0;
        case 0x2ce9c4u: goto label_2ce9c4;
        case 0x2ce9c8u: goto label_2ce9c8;
        case 0x2ce9ccu: goto label_2ce9cc;
        case 0x2ce9d0u: goto label_2ce9d0;
        case 0x2ce9d4u: goto label_2ce9d4;
        case 0x2ce9d8u: goto label_2ce9d8;
        case 0x2ce9dcu: goto label_2ce9dc;
        default: break;
    }

    ctx->pc = 0x2ce960u;

label_2ce960:
    // 0x2ce960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ce964:
    // 0x2ce964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce968:
    // 0x2ce968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ce96c:
    // 0x2ce96c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ce96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ce970:
    // 0x2ce970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce974:
    // 0x2ce974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ce978:
    // 0x2ce978: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x2ce978u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_2ce97c:
    // 0x2ce97c: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_2ce980:
    if (ctx->pc == 0x2CE980u) {
        ctx->pc = 0x2CE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE97Cu;
        // 0x2ce980: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE984u;
        goto label_2ce984;
    }
    ctx->pc = 0x2CE97Cu;
    {
        const bool branch_taken_0x2ce97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce97c) {
            ctx->pc = 0x2CE980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE97Cu;
            // 0x2ce980: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9CCu;
            goto label_2ce9cc;
        }
    }
    ctx->pc = 0x2CE984u;
label_2ce984:
    // 0x2ce984: 0xc0a3678  jal         func_28D9E0
label_2ce988:
    if (ctx->pc == 0x2CE988u) {
        ctx->pc = 0x2CE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE984u;
        // 0x2ce988: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE98Cu;
        goto label_2ce98c;
    }
    ctx->pc = 0x2CE984u;
    SET_GPR_U32(ctx, 31, 0x2CE98Cu);
    ctx->pc = 0x2CE988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE984u;
    // 0x2ce988: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2CE984u, 0x2CE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE98Cu;
label_2ce98c:
    // 0x2ce98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce990:
    // 0x2ce990: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_2ce994:
    if (ctx->pc == 0x2CE994u) {
        ctx->pc = 0x2CE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE990u;
        // 0x2ce994: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE998u;
        goto label_2ce998;
    }
    ctx->pc = 0x2CE990u;
    {
        const bool branch_taken_0x2ce990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce990) {
            ctx->pc = 0x2CE994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE990u;
            // 0x2ce994: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9CCu;
            goto label_2ce9cc;
        }
    }
    ctx->pc = 0x2CE998u;
label_2ce998:
    // 0x2ce998: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2ce998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ce99c:
    // 0x2ce99c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2ce99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2ce9a0:
    // 0x2ce9a0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ce9a4:
    // 0x2ce9a4: 0x40f809  jalr        $v0
label_2ce9a8:
    if (ctx->pc == 0x2CE9A8u) {
        ctx->pc = 0x2CE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9A4u;
        // 0x2ce9a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE9ACu;
        goto label_2ce9ac;
    }
    ctx->pc = 0x2CE9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE9ACu);
        ctx->pc = 0x2CE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9A4u;
        // 0x2ce9a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE9A4u, 0x2CE9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE9ACu;
label_2ce9ac:
    // 0x2ce9ac: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2ce9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2ce9b0:
    // 0x2ce9b0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2ce9b4:
    if (ctx->pc == 0x2CE9B4u) {
        ctx->pc = 0x2CE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9B0u;
        // 0x2ce9b4: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE9B8u;
        goto label_2ce9b8;
    }
    ctx->pc = 0x2CE9B0u;
    {
        const bool branch_taken_0x2ce9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce9b0) {
            ctx->pc = 0x2CE9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE9B0u;
            // 0x2ce9b4: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE9CCu;
            goto label_2ce9cc;
        }
    }
    ctx->pc = 0x2CE9B8u;
label_2ce9b8:
    // 0x2ce9b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ce9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce9bc:
    // 0x2ce9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce9c0:
    // 0x2ce9c0: 0xc0c48c4  jal         func_312310
label_2ce9c4:
    if (ctx->pc == 0x2CE9C4u) {
        ctx->pc = 0x2CE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9C0u;
        // 0x2ce9c4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE9C8u;
        goto label_2ce9c8;
    }
    ctx->pc = 0x2CE9C0u;
    SET_GPR_U32(ctx, 31, 0x2CE9C8u);
    ctx->pc = 0x2CE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9C0u;
    // 0x2ce9c4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312310u, 0x2CE9C0u, 0x2CE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE9C8u;
label_2ce9c8:
    // 0x2ce9c8: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2ce9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_2ce9cc:
    // 0x2ce9cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ce9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce9d0:
    // 0x2ce9d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce9d4:
    // 0x2ce9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce9d8:
    // 0x2ce9d8: 0x3e00008  jr          $ra
label_2ce9dc:
    if (ctx->pc == 0x2CE9DCu) {
        ctx->pc = 0x2CE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9D8u;
        // 0x2ce9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE9E0u;
        goto label_fallthrough_0x2ce9d8;
    }
    ctx->pc = 0x2CE9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9D8u;
        // 0x2ce9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ce9d8:
    ctx->pc = 0x2CE9E0u;
}
