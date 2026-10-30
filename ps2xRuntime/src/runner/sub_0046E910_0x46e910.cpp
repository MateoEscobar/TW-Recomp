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

// Function: sub_0046E910
// Address: 0x46e910 - 0x46eaa8
void sub_0046E910_0x46e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E910_0x46e910");
#endif

    switch (ctx->pc) {
        case 0x46e998u: goto label_46e998;
        default: break;
    }

    ctx->pc = 0x46e910u;

    // 0x46e910: 0x28c60004  slti        $a2, $a2, 0x4
    ctx->pc = 0x46e910u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x46e914: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46E914u;
    {
        const bool branch_taken_0x46e914 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e914) {
            ctx->pc = 0x46E918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E914u;
            // 0x46e918: 0x90820020  lbu         $v0, 0x20($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E928u;
            goto label_46e928;
        }
    }
    ctx->pc = 0x46E91Cu;
    // 0x46e91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46e920: 0x3e00008  jr          $ra
    ctx->pc = 0x46E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E920u;
        // 0x46e924: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E928u;
label_46e928:
    // 0x46e928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46e92c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x46e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x46e930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46e934: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x46e938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46e93c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x46E93Cu;
    {
        const bool branch_taken_0x46e93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x46E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E93Cu;
        // 0x46e940: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e93c) {
            ctx->pc = 0x46E968u;
            goto label_46e968;
        }
    }
    ctx->pc = 0x46E944u;
    // 0x46e944: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46e944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46e948: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x46e948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x46e94c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46e950: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x46e954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46e958: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x46E958u;
    {
        const bool branch_taken_0x46e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e958) {
            ctx->pc = 0x46E95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E958u;
            // 0x46e95c: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E98Cu;
            goto label_46e98c;
        }
    }
    ctx->pc = 0x46E960u;
    // 0x46e960: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x46E960u;
    {
        const bool branch_taken_0x46e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E960u;
        // 0x46e964: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e960) {
            ctx->pc = 0x46E990u;
            goto label_46e990;
        }
    }
    ctx->pc = 0x46E968u;
label_46e968:
    // 0x46e968: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46E968u;
    {
        const bool branch_taken_0x46e968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e968) {
            ctx->pc = 0x46E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E968u;
            // 0x46e96c: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E97Cu;
            goto label_46e97c;
        }
    }
    ctx->pc = 0x46E970u;
    // 0x46e970: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x46e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x46e974: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x46e974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x46e978: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x46e978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46e97c:
    // 0x46e97c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x46E97Cu;
    {
        const bool branch_taken_0x46e97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E97Cu;
        // 0x46e980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e97c) {
            ctx->pc = 0x46E990u;
            goto label_46e990;
        }
    }
    ctx->pc = 0x46E984u;
    // 0x46e984: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x46e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x46e988: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x46e988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_46e98c:
    // 0x46e98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46e98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e990:
    // 0x46e990: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x46e990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x46e994: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x46e994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_46e998:
    // 0x46e998: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x46e998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46e99c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x46e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x46e9a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46e9a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46e9a8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46E9A8u;
    {
        const bool branch_taken_0x46e9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E9A8u;
        // 0x46e9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e9a8) {
            ctx->pc = 0x46E9CCu;
            goto label_46e9cc;
        }
    }
    ctx->pc = 0x46E9B0u;
    // 0x46e9b0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46E9B0u;
    {
        const bool branch_taken_0x46e9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x46E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E9B0u;
        // 0x46e9b4: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e9b0) {
            ctx->pc = 0x46E9D0u;
            goto label_46e9d0;
        }
    }
    ctx->pc = 0x46E9B8u;
    // 0x46e9b8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x46e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x46e9bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46E9BCu;
    {
        const bool branch_taken_0x46e9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E9BCu;
        // 0x46e9c0: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e9bc) {
            ctx->pc = 0x46E9D0u;
            goto label_46e9d0;
        }
    }
    ctx->pc = 0x46E9C4u;
    // 0x46e9c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x46E9C4u;
    {
        const bool branch_taken_0x46e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E9C4u;
        // 0x46e9c8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e9c4) {
            ctx->pc = 0x46E9E8u;
            goto label_46e9e8;
        }
    }
    ctx->pc = 0x46E9CCu;
label_46e9cc:
    // 0x46e9cc: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x46e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_46e9d0:
    // 0x46e9d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46e9d4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x46e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x46e9d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46E9D8u;
    {
        const bool branch_taken_0x46e9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e9d8) {
            ctx->pc = 0x46E9E8u;
            goto label_46e9e8;
        }
    }
    ctx->pc = 0x46E9E0u;
    // 0x46e9e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x46e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x46e9e4: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x46e9e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_46e9e8:
    // 0x46e9e8: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x46E9E8u;
    {
        const bool branch_taken_0x46e9e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E9E8u;
        // 0x46e9ec: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e9e8) {
            ctx->pc = 0x46EA90u;
            goto label_46ea90;
        }
    }
    ctx->pc = 0x46E9F0u;
    // 0x46e9f0: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x46e9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x46e9f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46e9f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x46e9fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46ea00: 0x1466000a  bne         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x46EA00u;
    {
        const bool branch_taken_0x46ea00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x46EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EA00u;
        // 0x46ea04: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ea00) {
            ctx->pc = 0x46EA2Cu;
            goto label_46ea2c;
        }
    }
    ctx->pc = 0x46EA08u;
    // 0x46ea08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46ea0c: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x46ea0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x46ea10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ea14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x46ea18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46ea1c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x46EA1Cu;
    {
        const bool branch_taken_0x46ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ea1c) {
            ctx->pc = 0x46EA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EA1Cu;
            // 0x46ea20: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EA50u;
            goto label_46ea50;
        }
    }
    ctx->pc = 0x46EA24u;
    // 0x46ea24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x46EA24u;
    {
        const bool branch_taken_0x46ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EA24u;
        // 0x46ea28: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ea24) {
            ctx->pc = 0x46EA54u;
            goto label_46ea54;
        }
    }
    ctx->pc = 0x46EA2Cu;
label_46ea2c:
    // 0x46ea2c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EA2Cu;
    {
        const bool branch_taken_0x46ea2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ea2c) {
            ctx->pc = 0x46EA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EA2Cu;
            // 0x46ea30: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EA40u;
            goto label_46ea40;
        }
    }
    ctx->pc = 0x46EA34u;
    // 0x46ea34: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x46ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x46ea38: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x46ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x46ea3c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x46ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_46ea40:
    // 0x46ea40: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46EA40u;
    {
        const bool branch_taken_0x46ea40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ea40) {
            ctx->pc = 0x46EA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EA40u;
            // 0x46ea44: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EA54u;
            goto label_46ea54;
        }
    }
    ctx->pc = 0x46EA48u;
    // 0x46ea48: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x46ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x46ea4c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x46ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_46ea50:
    // 0x46ea50: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x46ea50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
label_46ea54:
    // 0x46ea54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x46ea58: 0xa0c20020  sb          $v0, 0x20($a2)
    ctx->pc = 0x46ea58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x46ea5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x46ea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46ea60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x46ea64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x46ea68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46ea6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x46EA6Cu;
    {
        const bool branch_taken_0x46ea6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EA6Cu;
        // 0x46ea70: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ea6c) {
            ctx->pc = 0x46EA78u;
            goto label_46ea78;
        }
    }
    ctx->pc = 0x46EA74u;
    // 0x46ea74: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x46ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_46ea78:
    // 0x46ea78: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x46ea78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x46ea7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ea80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x46ea84: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x46ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x46ea88: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x46ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x46ea8c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x46ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46ea90:
    // 0x46ea90: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x46ea90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46ea94: 0x2d030003  sltiu       $v1, $t0, 0x3
    ctx->pc = 0x46ea94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x46ea98: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x46EA98u;
    {
        const bool branch_taken_0x46ea98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EA98u;
        // 0x46ea9c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ea98) {
            ctx->pc = 0x46E998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e998;
        }
    }
    ctx->pc = 0x46EAA0u;
    // 0x46eaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x46EAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46EAA8u;
}
