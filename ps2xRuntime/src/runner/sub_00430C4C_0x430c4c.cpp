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

// Function: sub_00430C4C
// Address: 0x430c4c - 0x430d98
void sub_00430C4C_0x430c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430C4C_0x430c4c");
#endif

    switch (ctx->pc) {
        case 0x430cccu: goto label_430ccc;
        case 0x430d2cu: goto label_430d2c;
        case 0x430d64u: goto label_430d64;
        default: break;
    }

    ctx->pc = 0x430c4cu;

    // 0x430c4c: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x430c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x430c50: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x430c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x430c54: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x430C54u;
    {
        const bool branch_taken_0x430c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430c54) {
            ctx->pc = 0x430C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430C54u;
            // 0x430c58: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430D84u;
            goto label_430d84;
        }
    }
    ctx->pc = 0x430C5Cu;
    // 0x430c5c: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x430c5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x430c60: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x430c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430c64: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x430c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x430c68: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x430c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x430c6c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x430c6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x430c70: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x430c70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x430c74: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x430c74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x430c78: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x430c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x430c7c: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x430c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430c80: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430c84: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430c88: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430c8c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430c90: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430c94: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430c98: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x430C98u;
    {
        const bool branch_taken_0x430c98 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x430C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C98u;
        // 0x430c9c: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c98) {
            ctx->pc = 0x430D18u;
            goto label_430d18;
        }
    }
    ctx->pc = 0x430CA0u;
    // 0x430ca0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x430ca0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430ca4: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x430ca4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x430ca8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x430ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430cac: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x430cacu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x430cb0: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x430cb0u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430cb4: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x430cb4u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x430cb8: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x430cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x430cbc: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x430CBCu;
    {
        const bool branch_taken_0x430cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x430cbc) {
            ctx->pc = 0x430CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430CBCu;
            // 0x430cc0: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430D84u;
            goto label_430d84;
        }
    }
    ctx->pc = 0x430CC4u;
    // 0x430cc4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x430cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430cc8: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x430cc8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_430ccc:
    // 0x430ccc: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x430cccu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430cd0: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430cd0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430cd4: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x430cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x430cd8: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x430cd8u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x430cdc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x430cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x430ce0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x430CE0u;
    {
        const bool branch_taken_0x430ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x430CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430CE0u;
        // 0x430ce4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ce0) {
            ctx->pc = 0x430CF0u;
            goto label_430cf0;
        }
    }
    ctx->pc = 0x430CE8u;
    // 0x430ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x430CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430CE8u;
        // 0x430cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430CF0u;
label_430cf0:
    // 0x430cf0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x430cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x430cf4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x430cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430cf8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430cf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430cfc: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x430cfcu;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430d00: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x430d00u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x430d04: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x430d04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x430d08: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x430D08u;
    {
        const bool branch_taken_0x430d08 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x430d08) {
            ctx->pc = 0x430D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430D08u;
            // 0x430d0c: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430ccc;
        }
    }
    ctx->pc = 0x430D10u;
    // 0x430d10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x430D10u;
    {
        const bool branch_taken_0x430d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D10u;
        // 0x430d14: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d10) {
            ctx->pc = 0x430D84u;
            goto label_430d84;
        }
    }
    ctx->pc = 0x430D18u;
label_430d18:
    // 0x430d18: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x430d18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430d1c: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x430D1Cu;
    {
        const bool branch_taken_0x430d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x430d1c) {
            ctx->pc = 0x430D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430D1Cu;
            // 0x430d20: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430D84u;
            goto label_430d84;
        }
    }
    ctx->pc = 0x430D24u;
    // 0x430d24: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x430d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430d28: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x430d28u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_430d2c:
    // 0x430d2c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x430d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x430d30: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x430d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x430d34: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x430d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x430d38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x430D38u;
    {
        const bool branch_taken_0x430d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D38u;
        // 0x430d3c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d38) {
            ctx->pc = 0x430D48u;
            goto label_430d48;
        }
    }
    ctx->pc = 0x430D40u;
    // 0x430d40: 0x3e00008  jr          $ra
    ctx->pc = 0x430D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D40u;
        // 0x430d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430D48u;
label_430d48:
    // 0x430d48: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x430d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x430d4c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x430d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430d50: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x430d50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430d54: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x430D54u;
    {
        const bool branch_taken_0x430d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x430d54) {
            ctx->pc = 0x430D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430D54u;
            // 0x430d58: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430d2c;
        }
    }
    ctx->pc = 0x430D5Cu;
    // 0x430d5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x430D5Cu;
    {
        const bool branch_taken_0x430d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D5Cu;
        // 0x430d60: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d5c) {
            ctx->pc = 0x430D84u;
            goto label_430d84;
        }
    }
    ctx->pc = 0x430D64u;
label_430d64:
    // 0x430d64: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x430d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x430d68: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x430d68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430d6c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x430d6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x430d70: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x430D70u;
    {
        const bool branch_taken_0x430d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x430d70) {
            ctx->pc = 0x430D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430D70u;
            // 0x430d74: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430D8Cu;
            goto label_430d8c;
        }
    }
    ctx->pc = 0x430D78u;
    // 0x430d78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x430d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x430d7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x430d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x430d80: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x430d80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430d84:
    // 0x430d84: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x430D84u;
    {
        const bool branch_taken_0x430d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D84u;
        // 0x430d88: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d84) {
            ctx->pc = 0x430D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430d64;
        }
    }
    ctx->pc = 0x430D8Cu;
label_430d8c:
    // 0x430d8c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x430d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430d90: 0x3e00008  jr          $ra
    ctx->pc = 0x430D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D90u;
        // 0x430d94: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430D98u;
}
