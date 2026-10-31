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

// Function: sub_0043097C
// Address: 0x43097c - 0x430aac
void sub_0043097C_0x43097c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043097C_0x43097c");
#endif

    switch (ctx->pc) {
        case 0x430a08u: goto label_430a08;
        case 0x430a58u: goto label_430a58;
        case 0x430a78u: goto label_430a78;
        case 0x430a98u: goto label_430a98;
        default: break;
    }

    ctx->pc = 0x43097cu;

    // 0x43097c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43097cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x430980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x430984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x430984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430988: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x430988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x43098c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x43098Cu;
    {
        const bool branch_taken_0x43098c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43098Cu;
        // 0x430990: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43098c) {
            ctx->pc = 0x430A78u;
            goto label_430a78;
        }
    }
    ctx->pc = 0x430994u;
    // 0x430994: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x430994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x430998: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x430998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x43099c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4309a0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x4309a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x4309a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4309a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4309a8: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x4309a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x4309ac: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x4309acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x4309b0: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x4309b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x4309b4: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x4309b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4309b8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4309b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4309bc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x4309bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x4309c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4309c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4309c4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x4309c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x4309c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4309c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4309cc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x4309ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x4309d0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4309D0u;
    {
        const bool branch_taken_0x4309d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4309D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4309D0u;
        // 0x4309d4: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4309d0) {
            ctx->pc = 0x430A34u;
            goto label_430a34;
        }
    }
    ctx->pc = 0x4309D8u;
    // 0x4309d8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4309d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4309dc: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x4309dcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x4309e0: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x4309e0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x4309e4: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x4309e4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x4309e8: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x4309e8u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x4309ec: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x4309ecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4309f0: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x4309f0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x4309f4: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x4309f4u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x4309f8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4309f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4309fc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x4309FCu;
    {
        const bool branch_taken_0x4309fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4309FCu;
        // 0x430a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4309fc) {
            ctx->pc = 0x430A78u;
            goto label_430a78;
        }
    }
    ctx->pc = 0x430A04u;
    // 0x430a04: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x430a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_430a08:
    // 0x430a08: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x430a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x430a0c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x430a0cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x430a10: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x430a10u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x430a14: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430a14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430a18: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x430a18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430a1c: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x430a1cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x430a20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x430a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x430a24: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x430A24u;
    {
        const bool branch_taken_0x430a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430a24) {
            ctx->pc = 0x430A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430A24u;
            // 0x430a28: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430a08;
        }
    }
    ctx->pc = 0x430A2Cu;
    // 0x430a2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x430A2Cu;
    {
        const bool branch_taken_0x430a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A2Cu;
        // 0x430a30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430a2c) {
            ctx->pc = 0x430A78u;
            goto label_430a78;
        }
    }
    ctx->pc = 0x430A34u;
label_430a34:
    // 0x430a34: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x430a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430a38: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x430a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430a3c: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x430a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x430a40: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x430a40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x430a44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x430a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x430a48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x430a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x430a4c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x430A4Cu;
    {
        const bool branch_taken_0x430a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A4Cu;
        // 0x430a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430a4c) {
            ctx->pc = 0x430A78u;
            goto label_430a78;
        }
    }
    ctx->pc = 0x430A54u;
    // 0x430a54: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x430a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_430a58:
    // 0x430a58: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x430a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x430a5c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x430a5cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x430a60: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x430a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x430a64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430a68: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x430a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x430a6c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x430A6Cu;
    {
        const bool branch_taken_0x430a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430a6c) {
            ctx->pc = 0x430A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430A6Cu;
            // 0x430a70: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430a58;
        }
    }
    ctx->pc = 0x430A74u;
    // 0x430a74: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x430a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_430a78:
    // 0x430a78: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x430a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430a7c: 0x0  nop
    ctx->pc = 0x430a7cu;
    // NOP
    // 0x430a80: 0x0  nop
    ctx->pc = 0x430a80u;
    // NOP
    // 0x430a84: 0x0  nop
    ctx->pc = 0x430a84u;
    // NOP
    // 0x430a88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430A88u;
    {
        const bool branch_taken_0x430a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430a88) {
            ctx->pc = 0x430A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430A88u;
            // 0x430a8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430a78;
        }
    }
    ctx->pc = 0x430A90u;
    // 0x430a90: 0xc10c366  jal         func_430D98
    ctx->pc = 0x430A90u;
    SET_GPR_U32(ctx, 31, 0x430A98u);
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x430A90u, 0x430A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430A98u;
label_430a98:
    // 0x430a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x430a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430a9c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x430a9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x430aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x430AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430AA4u;
        // 0x430aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430AACu;
}
