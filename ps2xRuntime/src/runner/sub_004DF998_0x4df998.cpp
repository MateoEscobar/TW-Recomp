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

// Function: sub_004DF998
// Address: 0x4df998 - 0x4dfb50
void sub_004DF998_0x4df998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF998_0x4df998");
#endif

    switch (ctx->pc) {
        case 0x4df9ecu: goto label_4df9ec;
        case 0x4dfa20u: goto label_4dfa20;
        case 0x4dfa78u: goto label_4dfa78;
        case 0x4dfaa8u: goto label_4dfaa8;
        case 0x4dfb04u: goto label_4dfb04;
        case 0x4dfb18u: goto label_4dfb18;
        case 0x4dfb28u: goto label_4dfb28;
        default: break;
    }

    ctx->pc = 0x4df998u;

    // 0x4df998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4df998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4df99c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4df99cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df9a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4df9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4df9a4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4df9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df9a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4df9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4df9ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4df9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df9b0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4df9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4df9b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4df9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4df9b8: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4DF9B8u;
    {
        const bool branch_taken_0x4df9b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF9B8u;
        // 0x4df9bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df9b8) {
            ctx->pc = 0x4DF9F4u;
            goto label_4df9f4;
        }
    }
    ctx->pc = 0x4DF9C0u;
    // 0x4df9c0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4df9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4df9c4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DF9C4u;
    {
        const bool branch_taken_0x4df9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df9c4) {
            ctx->pc = 0x4DF9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF9C4u;
            // 0x4df9c8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF9E4u;
            goto label_4df9e4;
        }
    }
    ctx->pc = 0x4DF9CCu;
    // 0x4df9cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4df9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4df9d0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4df9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4df9d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4df9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4df9d8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4DF9D8u;
    {
        const bool branch_taken_0x4df9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df9d8) {
            ctx->pc = 0x4DFB10u;
            goto label_4dfb10;
        }
    }
    ctx->pc = 0x4DF9E0u;
    // 0x4df9e0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4df9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4df9e4:
    // 0x4df9e4: 0xc137e10  jal         func_4DF840
    ctx->pc = 0x4DF9E4u;
    SET_GPR_U32(ctx, 31, 0x4DF9ECu);
    ctx->pc = 0x4DF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF9E4u;
    // 0x4df9e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF840u, 0x4DF9E4u, 0x4DF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF9ECu;
label_4df9ec:
    // 0x4df9ec: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4DF9ECu;
    {
        const bool branch_taken_0x4df9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF9ECu;
        // 0x4df9f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df9ec) {
            ctx->pc = 0x4DFB2Cu;
            goto label_4dfb2c;
        }
    }
    ctx->pc = 0x4DF9F4u;
label_4df9f4:
    // 0x4df9f4: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4DF9F4u;
    {
        const bool branch_taken_0x4df9f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4df9f4) {
            ctx->pc = 0x4DF9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF9F4u;
            // 0x4df9f8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFA28u;
            goto label_4dfa28;
        }
    }
    ctx->pc = 0x4DF9FCu;
    // 0x4df9fc: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4df9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4dfa00: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dfa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dfa04: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4dfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4dfa08: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4dfa08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4dfa0c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4DFA0Cu;
    {
        const bool branch_taken_0x4dfa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA0Cu;
        // 0x4dfa10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa0c) {
            ctx->pc = 0x4DFAFCu;
            goto label_4dfafc;
        }
    }
    ctx->pc = 0x4DFA14u;
    // 0x4dfa14: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4dfa14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfa18: 0xc137e10  jal         func_4DF840
    ctx->pc = 0x4DFA18u;
    SET_GPR_U32(ctx, 31, 0x4DFA20u);
    ctx->pc = 0x4DFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFA18u;
    // 0x4dfa1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF840u, 0x4DFA18u, 0x4DFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFA20u;
label_4dfa20:
    // 0x4dfa20: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4DFA20u;
    {
        const bool branch_taken_0x4dfa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA20u;
        // 0x4dfa24: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa20) {
            ctx->pc = 0x4DFB2Cu;
            goto label_4dfb2c;
        }
    }
    ctx->pc = 0x4DFA28u;
label_4dfa28:
    // 0x4dfa28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dfa2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DFA2Cu;
    {
        const bool branch_taken_0x4dfa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA2Cu;
        // 0x4dfa30: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa2c) {
            ctx->pc = 0x4DFA50u;
            goto label_4dfa50;
        }
    }
    ctx->pc = 0x4DFA34u;
    // 0x4dfa34: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4dfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4dfa38: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4dfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4dfa3c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DFA3Cu;
    {
        const bool branch_taken_0x4dfa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4dfa3c) {
            ctx->pc = 0x4DFA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFA3Cu;
            // 0x4dfa40: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFA54u;
            goto label_4dfa54;
        }
    }
    ctx->pc = 0x4DFA44u;
    // 0x4dfa44: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4dfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4dfa48: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4DFA48u;
    {
        const bool branch_taken_0x4dfa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA48u;
        // 0x4dfa4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa48) {
            ctx->pc = 0x4DFAC0u;
            goto label_4dfac0;
        }
    }
    ctx->pc = 0x4DFA50u;
label_4dfa50:
    // 0x4dfa50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4dfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4dfa54:
    // 0x4dfa54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4dfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4dfa58: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4DFA58u;
    {
        const bool branch_taken_0x4dfa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfa58) {
            ctx->pc = 0x4DFA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFA58u;
            // 0x4dfa5c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFA98u;
            goto label_4dfa98;
        }
    }
    ctx->pc = 0x4DFA60u;
    // 0x4dfa60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4dfa60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfa64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4dfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4dfa68: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4DFA68u;
    {
        const bool branch_taken_0x4dfa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfa68) {
            ctx->pc = 0x4DFA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFA68u;
            // 0x4dfa6c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFAC0u;
            goto label_4dfac0;
        }
    }
    ctx->pc = 0x4DFA70u;
    // 0x4dfa70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4dfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4dfa74: 0x0  nop
    ctx->pc = 0x4dfa74u;
    // NOP
label_4dfa78:
    // 0x4dfa78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4dfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4dfa7c: 0x0  nop
    ctx->pc = 0x4dfa7cu;
    // NOP
    // 0x4dfa80: 0x0  nop
    ctx->pc = 0x4dfa80u;
    // NOP
    // 0x4dfa84: 0x0  nop
    ctx->pc = 0x4dfa84u;
    // NOP
    // 0x4dfa88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4DFA88u;
    {
        const bool branch_taken_0x4dfa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfa88) {
            ctx->pc = 0x4DFA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFA88u;
            // 0x4dfa8c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dfa78;
        }
    }
    ctx->pc = 0x4DFA90u;
    // 0x4dfa90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4DFA90u;
    {
        const bool branch_taken_0x4dfa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA90u;
        // 0x4dfa94: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa90) {
            ctx->pc = 0x4DFAC0u;
            goto label_4dfac0;
        }
    }
    ctx->pc = 0x4DFA98u;
label_4dfa98:
    // 0x4dfa98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4dfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4dfa9c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DFA9Cu;
    {
        const bool branch_taken_0x4dfa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFA9Cu;
        // 0x4dfaa0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa9c) {
            ctx->pc = 0x4DFAC0u;
            goto label_4dfac0;
        }
    }
    ctx->pc = 0x4DFAA4u;
    // 0x4dfaa4: 0x0  nop
    ctx->pc = 0x4dfaa4u;
    // NOP
label_4dfaa8:
    // 0x4dfaa8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4dfaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4dfaac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4dfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dfab0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4dfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4dfab4: 0x0  nop
    ctx->pc = 0x4dfab4u;
    // NOP
    // 0x4dfab8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4DFAB8u;
    {
        const bool branch_taken_0x4dfab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFAB8u;
        // 0x4dfabc: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfab8) {
            ctx->pc = 0x4DFAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dfaa8;
        }
    }
    ctx->pc = 0x4DFAC0u;
label_4dfac0:
    // 0x4dfac0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4dfac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dfac4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4dfac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dfac8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4dfacc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4dfaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4dfad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DFAD0u;
    {
        const bool branch_taken_0x4dfad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFAD0u;
        // 0x4dfad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfad0) {
            ctx->pc = 0x4DFAE4u;
            goto label_4dfae4;
        }
    }
    ctx->pc = 0x4DFAD8u;
    // 0x4dfad8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4dfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dfadc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4dfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4dfae0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4dfae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dfae4:
    // 0x4dfae4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4DFAE4u;
    {
        const bool branch_taken_0x4dfae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFAE4u;
        // 0x4dfae8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfae4) {
            ctx->pc = 0x4DFB20u;
            goto label_4dfb20;
        }
    }
    ctx->pc = 0x4DFAECu;
    // 0x4dfaec: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4dfaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4dfaf0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DFAF0u;
    {
        const bool branch_taken_0x4dfaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dfaf0) {
            ctx->pc = 0x4DFAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFAF0u;
            // 0x4dfaf4: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFB0Cu;
            goto label_4dfb0c;
        }
    }
    ctx->pc = 0x4DFAF8u;
    // 0x4dfaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dfafc:
    // 0x4dfafc: 0xc137d1c  jal         func_4DF470
    ctx->pc = 0x4DFAFCu;
    SET_GPR_U32(ctx, 31, 0x4DFB04u);
    ctx->pc = 0x4DFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFAFCu;
    // 0x4dfb00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF470u, 0x4DFAFCu, 0x4DFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFB04u;
label_4dfb04:
    // 0x4dfb04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4DFB04u;
    {
        const bool branch_taken_0x4dfb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFB04u;
        // 0x4dfb08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfb04) {
            ctx->pc = 0x4DFB34u;
            goto label_4dfb34;
        }
    }
    ctx->pc = 0x4DFB0Cu;
label_4dfb0c:
    // 0x4dfb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dfb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dfb10:
    // 0x4dfb10: 0xc137d1c  jal         func_4DF470
    ctx->pc = 0x4DFB10u;
    SET_GPR_U32(ctx, 31, 0x4DFB18u);
    ctx->pc = 0x4DFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFB10u;
    // 0x4dfb14: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF470u, 0x4DFB10u, 0x4DFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFB18u;
label_4dfb18:
    // 0x4dfb18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4DFB18u;
    {
        const bool branch_taken_0x4dfb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFB18u;
        // 0x4dfb1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfb18) {
            ctx->pc = 0x4DFB34u;
            goto label_4dfb34;
        }
    }
    ctx->pc = 0x4DFB20u;
label_4dfb20:
    // 0x4dfb20: 0xc137e10  jal         func_4DF840
    ctx->pc = 0x4DFB20u;
    SET_GPR_U32(ctx, 31, 0x4DFB28u);
    ctx->pc = 0x4DFB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFB20u;
    // 0x4dfb24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF840u, 0x4DFB20u, 0x4DFB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFB28u;
label_4dfb28:
    // 0x4dfb28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4dfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfb2c:
    // 0x4dfb2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4dfb30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dfb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dfb34:
    // 0x4dfb34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dfb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dfb38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dfb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dfb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DFB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFB3Cu;
        // 0x4dfb40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DFB44u;
    // 0x4dfb44: 0x0  nop
    ctx->pc = 0x4dfb44u;
    // NOP
    // 0x4dfb48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4dfb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4dfb4c: 0x0  nop
    ctx->pc = 0x4dfb4cu;
    // NOP
    ctx->pc = 0x4dfb50u;
}
