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

// Function: sub_004EDE08
// Address: 0x4ede08 - 0x4edec8
void sub_004EDE08_0x4ede08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDE08_0x4ede08");
#endif

    switch (ctx->pc) {
        case 0x4ede08u: goto label_4ede08;
        case 0x4ede0cu: goto label_4ede0c;
        case 0x4ede10u: goto label_4ede10;
        case 0x4ede14u: goto label_4ede14;
        case 0x4ede18u: goto label_4ede18;
        case 0x4ede1cu: goto label_4ede1c;
        case 0x4ede20u: goto label_4ede20;
        case 0x4ede24u: goto label_4ede24;
        case 0x4ede28u: goto label_4ede28;
        case 0x4ede2cu: goto label_4ede2c;
        case 0x4ede30u: goto label_4ede30;
        case 0x4ede34u: goto label_4ede34;
        case 0x4ede38u: goto label_4ede38;
        case 0x4ede3cu: goto label_4ede3c;
        case 0x4ede40u: goto label_4ede40;
        case 0x4ede44u: goto label_4ede44;
        case 0x4ede48u: goto label_4ede48;
        case 0x4ede4cu: goto label_4ede4c;
        case 0x4ede50u: goto label_4ede50;
        case 0x4ede54u: goto label_4ede54;
        case 0x4ede58u: goto label_4ede58;
        case 0x4ede5cu: goto label_4ede5c;
        case 0x4ede60u: goto label_4ede60;
        case 0x4ede64u: goto label_4ede64;
        case 0x4ede68u: goto label_4ede68;
        case 0x4ede6cu: goto label_4ede6c;
        case 0x4ede70u: goto label_4ede70;
        case 0x4ede74u: goto label_4ede74;
        case 0x4ede78u: goto label_4ede78;
        case 0x4ede7cu: goto label_4ede7c;
        case 0x4ede80u: goto label_4ede80;
        case 0x4ede84u: goto label_4ede84;
        case 0x4ede88u: goto label_4ede88;
        case 0x4ede8cu: goto label_4ede8c;
        case 0x4ede90u: goto label_4ede90;
        case 0x4ede94u: goto label_4ede94;
        case 0x4ede98u: goto label_4ede98;
        case 0x4ede9cu: goto label_4ede9c;
        case 0x4edea0u: goto label_4edea0;
        case 0x4edea4u: goto label_4edea4;
        case 0x4edea8u: goto label_4edea8;
        case 0x4edeacu: goto label_4edeac;
        case 0x4edeb0u: goto label_4edeb0;
        case 0x4edeb4u: goto label_4edeb4;
        case 0x4edeb8u: goto label_4edeb8;
        case 0x4edebcu: goto label_4edebc;
        case 0x4edec0u: goto label_4edec0;
        case 0x4edec4u: goto label_4edec4;
        default: break;
    }

    ctx->pc = 0x4ede08u;

label_4ede08:
    // 0x4ede08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4ede08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4ede0c:
    // 0x4ede0c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4ede0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4ede10:
    // 0x4ede10: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x4ede10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4ede14:
    // 0x4ede14: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ede14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4ede18:
    // 0x4ede18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4ede18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4ede1c:
    // 0x4ede1c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4ede1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_4ede20:
    // 0x4ede20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4ede20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4ede24:
    // 0x4ede24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ede24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ede28:
    // 0x4ede28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ede28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ede2c:
    // 0x4ede2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ede2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ede30:
    // 0x4ede30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ede30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ede34:
    // 0x4ede34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ede34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ede38:
    // 0x4ede38: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x4ede38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_4ede3c:
    // 0x4ede3c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x4ede3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_4ede40:
    // 0x4ede40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4ede40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4ede44:
    // 0x4ede44: 0x0  nop
    ctx->pc = 0x4ede44u;
    // NOP
label_4ede48:
    // 0x4ede48: 0xc0e4060  jal         func_390180
label_4ede4c:
    if (ctx->pc == 0x4EDE4Cu) {
        ctx->pc = 0x4EDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE48u;
        // 0x4ede4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDE50u;
        goto label_4ede50;
    }
    ctx->pc = 0x4EDE48u;
    SET_GPR_U32(ctx, 31, 0x4EDE50u);
    ctx->pc = 0x4EDE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDE48u;
    // 0x4ede4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4EDE48u, 0x4EDE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDE50u;
label_4ede50:
    // 0x4ede50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4ede50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ede54:
    // 0x4ede54: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_4ede58:
    if (ctx->pc == 0x4EDE58u) {
        ctx->pc = 0x4EDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE54u;
        // 0x4ede58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDE5Cu;
        goto label_4ede5c;
    }
    ctx->pc = 0x4EDE54u;
    {
        const bool branch_taken_0x4ede54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE54u;
        // 0x4ede58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ede54) {
            ctx->pc = 0x4EDE94u;
            goto label_4ede94;
        }
    }
    ctx->pc = 0x4EDE5Cu;
label_4ede5c:
    // 0x4ede5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ede5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4ede60:
    // 0x4ede60: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x4ede60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4ede64:
    // 0x4ede64: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x4ede64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4ede68:
    // 0x4ede68: 0x60f809  jalr        $v1
label_4ede6c:
    if (ctx->pc == 0x4EDE6Cu) {
        ctx->pc = 0x4EDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE68u;
        // 0x4ede6c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDE70u;
        goto label_4ede70;
    }
    ctx->pc = 0x4EDE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EDE70u);
        ctx->pc = 0x4EDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE68u;
        // 0x4ede6c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDE68u, 0x4EDE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EDE70u;
label_4ede70:
    // 0x4ede70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ede70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4ede74:
    // 0x4ede74: 0xc0cdb38  jal         func_336CE0
label_4ede78:
    if (ctx->pc == 0x4EDE78u) {
        ctx->pc = 0x4EDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE74u;
        // 0x4ede78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDE7Cu;
        goto label_4ede7c;
    }
    ctx->pc = 0x4EDE74u;
    SET_GPR_U32(ctx, 31, 0x4EDE7Cu);
    ctx->pc = 0x4EDE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDE74u;
    // 0x4ede78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x4EDE74u, 0x4EDE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDE7Cu;
label_4ede7c:
    // 0x4ede7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4ede7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ede80:
    // 0x4ede80: 0x0  nop
    ctx->pc = 0x4ede80u;
    // NOP
label_4ede84:
    // 0x4ede84: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4ede88:
    if (ctx->pc == 0x4EDE88u) {
        ctx->pc = 0x4EDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE84u;
        // 0x4ede88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDE8Cu;
        goto label_4ede8c;
    }
    ctx->pc = 0x4EDE84u;
    {
        const bool branch_taken_0x4ede84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ede84) {
            ctx->pc = 0x4EDE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDE84u;
            // 0x4ede88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EDE98u;
            goto label_4ede98;
        }
    }
    ctx->pc = 0x4EDE8Cu;
label_4ede8c:
    // 0x4ede8c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x4ede8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ede90:
    // 0x4ede90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4ede90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4ede94:
    // 0x4ede94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ede94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ede98:
    // 0x4ede98: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x4ede98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4ede9c:
    // 0x4ede9c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_4edea0:
    if (ctx->pc == 0x4EDEA0u) {
        ctx->pc = 0x4EDEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE9Cu;
        // 0x4edea0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDEA4u;
        goto label_4edea4;
    }
    ctx->pc = 0x4EDE9Cu;
    {
        const bool branch_taken_0x4ede9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDE9Cu;
        // 0x4edea0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ede9c) {
            ctx->pc = 0x4EDE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ede48;
        }
    }
    ctx->pc = 0x4EDEA4u;
label_4edea4:
    // 0x4edea4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4edea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4edea8:
    // 0x4edea8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4edea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4edeac:
    // 0x4edeac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4edeacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4edeb0:
    // 0x4edeb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4edeb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4edeb4:
    // 0x4edeb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4edeb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4edeb8:
    // 0x4edeb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4edeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4edebc:
    // 0x4edebc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4edebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4edec0:
    // 0x4edec0: 0x3e00008  jr          $ra
label_4edec4:
    if (ctx->pc == 0x4EDEC4u) {
        ctx->pc = 0x4EDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDEC0u;
        // 0x4edec4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDEC8u;
        goto label_fallthrough_0x4edec0;
    }
    ctx->pc = 0x4EDEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDEC0u;
        // 0x4edec4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4edec0:
    ctx->pc = 0x4EDEC8u;
}
