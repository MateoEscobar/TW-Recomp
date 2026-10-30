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

// Function: sub_0011CF70
// Address: 0x11cf70 - 0x11d098
void sub_0011CF70_0x11cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CF70_0x11cf70");
#endif

    switch (ctx->pc) {
        case 0x11cfbcu: goto label_11cfbc;
        case 0x11d028u: goto label_11d028;
        case 0x11d030u: goto label_11d030;
        default: break;
    }

    ctx->pc = 0x11cf70u;

    // 0x11cf70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11cf74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11cf78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11cf7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11cf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11cf84: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x11cf84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cf88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11cf88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf8c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11cf8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11cf90: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11cf90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11cf94: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x11cf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cf98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11cf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11cfa0: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x11cfa0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    // 0x11cfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cfa8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x11cfa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11cfac: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x11cfacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x11cfb0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x11cfb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x11cfb4: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11CFB4u;
    SET_GPR_U32(ctx, 31, 0x11CFBCu);
    ctx->pc = 0x11CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFB4u;
    // 0x11cfb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11CFB4u, 0x11CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFBCu;
label_11cfbc:
    // 0x11cfbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfc0: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11CFC0u;
    {
        const bool branch_taken_0x11cfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFC0u;
        // 0x11cfc4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfc0) {
            ctx->pc = 0x11D070u;
            goto label_11d070;
        }
    }
    ctx->pc = 0x11CFC8u;
    // 0x11cfc8: 0xc480035c  lwc1        $f0, 0x35C($a0)
    ctx->pc = 0x11cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cfcc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11cfccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cfd4: 0x52180b  movn        $v1, $v0, $s2
    ctx->pc = 0x11cfd4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x11cfd8: 0xe4950370  swc1        $f21, 0x370($a0)
    ctx->pc = 0x11cfd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 880), bits); }
    // 0x11cfdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11cfdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cfe0: 0xa08303ed  sb          $v1, 0x3ED($a0)
    ctx->pc = 0x11cfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1005), (uint8_t)GPR_U32(ctx, 3));
    // 0x11cfe4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11CFE4u;
    {
        const bool branch_taken_0x11cfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFE4u;
        // 0x11cfe8: 0xe494039c  swc1        $f20, 0x39C($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfe4) {
            ctx->pc = 0x11CFF0u;
            goto label_11cff0;
        }
    }
    ctx->pc = 0x11CFECu;
    // 0x11cfec: 0xe481039c  swc1        $f1, 0x39C($a0)
    ctx->pc = 0x11cfecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
label_11cff0:
    // 0x11cff0: 0x16110020  bne         $s0, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11CFF0u;
    {
        const bool branch_taken_0x11cff0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x11CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFF0u;
        // 0x11cff4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cff0) {
            ctx->pc = 0x11D074u;
            goto label_11d074;
        }
    }
    ctx->pc = 0x11CFF8u;
    // 0x11cff8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x11cffc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11cffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d000: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x11d000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d004: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d008: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d00c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D00Cu;
    {
        const bool branch_taken_0x11d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D00Cu;
        // 0x11d010: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d00c) {
            ctx->pc = 0x11D070u;
            goto label_11d070;
        }
    }
    ctx->pc = 0x11D014u;
    // 0x11d014: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x11d014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d018: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x11d018u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
    // 0x11d01c: 0x212880b  movn        $s1, $s0, $s2
    ctx->pc = 0x11d01cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x11d020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d024: 0x0  nop
    ctx->pc = 0x11d024u;
    // NOP
label_11d028:
    // 0x11d028: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D028u;
    SET_GPR_U32(ctx, 31, 0x11D030u);
    ctx->pc = 0x11D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D028u;
    // 0x11d02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D028u, 0x11D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D030u;
label_11d030:
    // 0x11d030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d034: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D034u;
    {
        const bool branch_taken_0x11d034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D034u;
        // 0x11d038: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d034) {
            ctx->pc = 0x11D05Cu;
            goto label_11d05c;
        }
    }
    ctx->pc = 0x11D03Cu;
    // 0x11d03c: 0xc480035c  lwc1        $f0, 0x35C($a0)
    ctx->pc = 0x11d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d040: 0xa09103ed  sb          $s1, 0x3ED($a0)
    ctx->pc = 0x11d040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1005), (uint8_t)GPR_U32(ctx, 17));
    // 0x11d044: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x11d044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d048: 0xe4950370  swc1        $f21, 0x370($a0)
    ctx->pc = 0x11d048u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 880), bits); }
    // 0x11d04c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11D04Cu;
    {
        const bool branch_taken_0x11d04c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D04Cu;
        // 0x11d050: 0xe494039c  swc1        $f20, 0x39C($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d04c) {
            ctx->pc = 0x11D058u;
            goto label_11d058;
        }
    }
    ctx->pc = 0x11D054u;
    // 0x11d054: 0xac80039c  sw          $zero, 0x39C($a0)
    ctx->pc = 0x11d054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 924), GPR_U32(ctx, 0));
label_11d058:
    // 0x11d058: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x11d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_11d05c:
    // 0x11d05c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11d060: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d064: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d068: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11D068u;
    {
        const bool branch_taken_0x11d068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D068u;
        // 0x11d06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d068) {
            ctx->pc = 0x11D028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d028;
        }
    }
    ctx->pc = 0x11D070u;
label_11d070:
    // 0x11d070: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11d070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11d074:
    // 0x11d074: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11d074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d07c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11d07cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d084: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x11d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11d088: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11d08c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d090: 0x3e00008  jr          $ra
    ctx->pc = 0x11D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D090u;
        // 0x11d094: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D098u;
}
