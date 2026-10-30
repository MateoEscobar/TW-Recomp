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

// Function: sub_0016E8F0
// Address: 0x16e8f0 - 0x16ea20
void sub_0016E8F0_0x16e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E8F0_0x16e8f0");
#endif

    switch (ctx->pc) {
        case 0x16e93cu: goto label_16e93c;
        case 0x16e98cu: goto label_16e98c;
        case 0x16e998u: goto label_16e998;
        case 0x16e9b8u: goto label_16e9b8;
        case 0x16e9c8u: goto label_16e9c8;
        case 0x16e9d8u: goto label_16e9d8;
        default: break;
    }

    ctx->pc = 0x16e8f0u;

    // 0x16e8f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16e8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16e8f4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x16e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x16e8f8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x16e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x16e8fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e900: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x16e900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x16e904: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x16e904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x16e908: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x16e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x16e90c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x16e90cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e910: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x16e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x16e914: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x16e914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e918: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x16e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x16e91c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x16e91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e920: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x16e920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x16e924: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16e924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e928: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16e92c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16e92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16e930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e934: 0xc137916  jal         func_4DE458
    ctx->pc = 0x16E934u;
    SET_GPR_U32(ctx, 31, 0x16E93Cu);
    ctx->pc = 0x16E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E934u;
    // 0x16e938: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x16E934u, 0x16E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E93Cu;
label_16e93c:
    // 0x16e93c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x16e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16e940: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e944: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E944u;
    {
        const bool branch_taken_0x16e944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E944u;
        // 0x16e948: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e944) {
            ctx->pc = 0x16E968u;
            goto label_16e968;
        }
    }
    ctx->pc = 0x16E94Cu;
    // 0x16e94c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16e950: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16e954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16e954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16e958: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16e958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16e95c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e960: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16E960u;
    {
        const bool branch_taken_0x16e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E960u;
        // 0x16e964: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e960) {
            ctx->pc = 0x16E9F8u;
            goto label_16e9f8;
        }
    }
    ctx->pc = 0x16E968u;
label_16e968:
    // 0x16e968: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16E968u;
    {
        const bool branch_taken_0x16e968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E968u;
        // 0x16e96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e968) {
            ctx->pc = 0x16E9F8u;
            goto label_16e9f8;
        }
    }
    ctx->pc = 0x16E970u;
    // 0x16e970: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16e974: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x16e978: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x16e978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e980: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x16e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x16e984: 0xc10ca04  jal         func_432810
    ctx->pc = 0x16E984u;
    SET_GPR_U32(ctx, 31, 0x16E98Cu);
    ctx->pc = 0x16E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E984u;
    // 0x16e988: 0x24c61930  addiu       $a2, $a2, 0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x16E984u, 0x16E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E98Cu;
label_16e98c:
    // 0x16e98c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e990: 0xc061668  jal         func_1859A0
    ctx->pc = 0x16E990u;
    SET_GPR_U32(ctx, 31, 0x16E998u);
    ctx->pc = 0x16E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E990u;
    // 0x16e994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x16E990u, 0x16E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E998u;
label_16e998:
    // 0x16e998: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E998u;
    {
        const bool branch_taken_0x16e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E998u;
        // 0x16e99c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e998) {
            ctx->pc = 0x16E9BCu;
            goto label_16e9bc;
        }
    }
    ctx->pc = 0x16E9A0u;
    // 0x16e9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16e9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e9a8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x16e9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e9ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x16e9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e9b0: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x16E9B0u;
    SET_GPR_U32(ctx, 31, 0x16E9B8u);
    ctx->pc = 0x16E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9B0u;
    // 0x16e9b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x16E9B0u, 0x16E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9B8u;
label_16e9b8:
    // 0x16e9b8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16e9bc:
    // 0x16e9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e9c0: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x16E9C0u;
    SET_GPR_U32(ctx, 31, 0x16E9C8u);
    ctx->pc = 0x16E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9C0u;
    // 0x16e9c4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x16E9C0u, 0x16E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9C8u;
label_16e9c8:
    // 0x16e9c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e9cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16e9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e9d0: 0xc137916  jal         func_4DE458
    ctx->pc = 0x16E9D0u;
    SET_GPR_U32(ctx, 31, 0x16E9D8u);
    ctx->pc = 0x16E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9D0u;
    // 0x16e9d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x16E9D0u, 0x16E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9D8u;
label_16e9d8:
    // 0x16e9d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e9dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16e9e0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x16e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16e9e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16e9e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e9ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x16e9f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9f4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16e9f8:
    // 0x16e9f8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x16e9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16e9fc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x16e9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ea00: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x16ea00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16ea04: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x16ea04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ea08: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x16ea08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ea0c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x16ea0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ea10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA14u;
        // 0x16ea18: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EA1Cu;
    // 0x16ea1c: 0x0  nop
    ctx->pc = 0x16ea1cu;
    // NOP
    ctx->pc = 0x16ea20u;
}
