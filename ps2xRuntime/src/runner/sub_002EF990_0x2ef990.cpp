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

// Function: sub_002EF990
// Address: 0x2ef990 - 0x2efa58
void sub_002EF990_0x2ef990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF990_0x2ef990");
#endif

    switch (ctx->pc) {
        case 0x2ef990u: goto label_2ef990;
        case 0x2ef994u: goto label_2ef994;
        case 0x2ef998u: goto label_2ef998;
        case 0x2ef99cu: goto label_2ef99c;
        case 0x2ef9a0u: goto label_2ef9a0;
        case 0x2ef9a4u: goto label_2ef9a4;
        case 0x2ef9a8u: goto label_2ef9a8;
        case 0x2ef9acu: goto label_2ef9ac;
        case 0x2ef9b0u: goto label_2ef9b0;
        case 0x2ef9b4u: goto label_2ef9b4;
        case 0x2ef9b8u: goto label_2ef9b8;
        case 0x2ef9bcu: goto label_2ef9bc;
        case 0x2ef9c0u: goto label_2ef9c0;
        case 0x2ef9c4u: goto label_2ef9c4;
        case 0x2ef9c8u: goto label_2ef9c8;
        case 0x2ef9ccu: goto label_2ef9cc;
        case 0x2ef9d0u: goto label_2ef9d0;
        case 0x2ef9d4u: goto label_2ef9d4;
        case 0x2ef9d8u: goto label_2ef9d8;
        case 0x2ef9dcu: goto label_2ef9dc;
        case 0x2ef9e0u: goto label_2ef9e0;
        case 0x2ef9e4u: goto label_2ef9e4;
        case 0x2ef9e8u: goto label_2ef9e8;
        case 0x2ef9ecu: goto label_2ef9ec;
        case 0x2ef9f0u: goto label_2ef9f0;
        case 0x2ef9f4u: goto label_2ef9f4;
        case 0x2ef9f8u: goto label_2ef9f8;
        case 0x2ef9fcu: goto label_2ef9fc;
        case 0x2efa00u: goto label_2efa00;
        case 0x2efa04u: goto label_2efa04;
        case 0x2efa08u: goto label_2efa08;
        case 0x2efa0cu: goto label_2efa0c;
        case 0x2efa10u: goto label_2efa10;
        case 0x2efa14u: goto label_2efa14;
        case 0x2efa18u: goto label_2efa18;
        case 0x2efa1cu: goto label_2efa1c;
        case 0x2efa20u: goto label_2efa20;
        case 0x2efa24u: goto label_2efa24;
        case 0x2efa28u: goto label_2efa28;
        case 0x2efa2cu: goto label_2efa2c;
        case 0x2efa30u: goto label_2efa30;
        case 0x2efa34u: goto label_2efa34;
        case 0x2efa38u: goto label_2efa38;
        case 0x2efa3cu: goto label_2efa3c;
        case 0x2efa40u: goto label_2efa40;
        case 0x2efa44u: goto label_2efa44;
        case 0x2efa48u: goto label_2efa48;
        case 0x2efa4cu: goto label_2efa4c;
        case 0x2efa50u: goto label_2efa50;
        case 0x2efa54u: goto label_2efa54;
        default: break;
    }

    ctx->pc = 0x2ef990u;

label_2ef990:
    // 0x2ef990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ef990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ef994:
    // 0x2ef994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef998:
    // 0x2ef998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ef998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ef99c:
    // 0x2ef99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ef99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef9a0:
    // 0x2ef9a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ef9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ef9a4:
    // 0x2ef9a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef9a8:
    // 0x2ef9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef9ac:
    // 0x2ef9ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ef9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef9b0:
    // 0x2ef9b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ef9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ef9b4:
    // 0x2ef9b4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2ef9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2ef9b8:
    // 0x2ef9b8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2ef9b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2ef9bc:
    // 0x2ef9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef9c0:
    // 0x2ef9c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef9c4:
    // 0x2ef9c4: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2ef9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2ef9c8:
    // 0x2ef9c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ef9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef9cc:
    // 0x2ef9cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ef9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef9d0:
    // 0x2ef9d0: 0xa0520265  sb          $s2, 0x265($v0)
    ctx->pc = 0x2ef9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 18));
label_2ef9d4:
    // 0x2ef9d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef9d8:
    // 0x2ef9d8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ef9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ef9dc:
    // 0x2ef9dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ef9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef9e0:
    // 0x2ef9e0: 0xa052011e  sb          $s2, 0x11E($v0)
    ctx->pc = 0x2ef9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 18));
label_2ef9e4:
    // 0x2ef9e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ef9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef9e8:
    // 0x2ef9e8: 0xc0a22c6  jal         func_288B18
label_2ef9ec:
    if (ctx->pc == 0x2EF9ECu) {
        ctx->pc = 0x2EF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E8u;
        // 0x2ef9ec: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9F0u;
        goto label_2ef9f0;
    }
    ctx->pc = 0x2EF9E8u;
    SET_GPR_U32(ctx, 31, 0x2EF9F0u);
    ctx->pc = 0x2EF9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9E8u;
    // 0x2ef9ec: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EF9E8u, 0x2EF9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9F0u;
label_2ef9f0:
    // 0x2ef9f0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ef9f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ef9f4:
    // 0x2ef9f4: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x2ef9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2ef9f8:
    // 0x2ef9f8: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x2ef9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2ef9fc:
    // 0x2ef9fc: 0x2407fdff  addiu       $a3, $zero, -0x201
    ctx->pc = 0x2ef9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2efa00:
    // 0x2efa00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2efa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2efa04:
    // 0x2efa04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2efa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2efa08:
    // 0x2efa08: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2efa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2efa0c:
    // 0x2efa0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2efa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2efa10:
    // 0x2efa10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2efa10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2efa14:
    // 0x2efa14: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2efa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2efa18:
    // 0x2efa18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2efa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2efa1c:
    // 0x2efa1c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2efa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2efa20:
    // 0x2efa20: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2efa20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2efa24:
    // 0x2efa24: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2efa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2efa28:
    // 0x2efa28: 0x40f809  jalr        $v0
label_2efa2c:
    if (ctx->pc == 0x2EFA2Cu) {
        ctx->pc = 0x2EFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA28u;
        // 0x2efa2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA30u;
        goto label_2efa30;
    }
    ctx->pc = 0x2EFA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EFA30u);
        ctx->pc = 0x2EFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA28u;
        // 0x2efa2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA28u, 0x2EFA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFA30u;
label_2efa30:
    // 0x2efa30: 0xa2120284  sb          $s2, 0x284($s0)
    ctx->pc = 0x2efa30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 18));
label_2efa34:
    // 0x2efa34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efa38:
    // 0x2efa38: 0xc0bbe96  jal         func_2EFA58
label_2efa3c:
    if (ctx->pc == 0x2EFA3Cu) {
        ctx->pc = 0x2EFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA38u;
        // 0x2efa3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA40u;
        goto label_2efa40;
    }
    ctx->pc = 0x2EFA38u;
    SET_GPR_U32(ctx, 31, 0x2EFA40u);
    ctx->pc = 0x2EFA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA38u;
    // 0x2efa3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA58u, 0x2EFA38u, 0x2EFA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA40u;
label_2efa40:
    // 0x2efa40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2efa40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2efa44:
    // 0x2efa44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2efa44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2efa48:
    // 0x2efa48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2efa48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2efa4c:
    // 0x2efa4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2efa50:
    // 0x2efa50: 0x3e00008  jr          $ra
label_2efa54:
    if (ctx->pc == 0x2EFA54u) {
        ctx->pc = 0x2EFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA50u;
        // 0x2efa54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA58u;
        goto label_fallthrough_0x2efa50;
    }
    ctx->pc = 0x2EFA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA50u;
        // 0x2efa54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efa50:
    ctx->pc = 0x2EFA58u;
}
