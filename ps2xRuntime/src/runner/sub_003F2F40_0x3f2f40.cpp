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

// Function: sub_003F2F40
// Address: 0x3f2f40 - 0x3f3038
void sub_003F2F40_0x3f2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2F40_0x3f2f40");
#endif

    switch (ctx->pc) {
        case 0x3f2f40u: goto label_3f2f40;
        case 0x3f2f44u: goto label_3f2f44;
        case 0x3f2f48u: goto label_3f2f48;
        case 0x3f2f4cu: goto label_3f2f4c;
        case 0x3f2f50u: goto label_3f2f50;
        case 0x3f2f54u: goto label_3f2f54;
        case 0x3f2f58u: goto label_3f2f58;
        case 0x3f2f5cu: goto label_3f2f5c;
        case 0x3f2f60u: goto label_3f2f60;
        case 0x3f2f64u: goto label_3f2f64;
        case 0x3f2f68u: goto label_3f2f68;
        case 0x3f2f6cu: goto label_3f2f6c;
        case 0x3f2f70u: goto label_3f2f70;
        case 0x3f2f74u: goto label_3f2f74;
        case 0x3f2f78u: goto label_3f2f78;
        case 0x3f2f7cu: goto label_3f2f7c;
        case 0x3f2f80u: goto label_3f2f80;
        case 0x3f2f84u: goto label_3f2f84;
        case 0x3f2f88u: goto label_3f2f88;
        case 0x3f2f8cu: goto label_3f2f8c;
        case 0x3f2f90u: goto label_3f2f90;
        case 0x3f2f94u: goto label_3f2f94;
        case 0x3f2f98u: goto label_3f2f98;
        case 0x3f2f9cu: goto label_3f2f9c;
        case 0x3f2fa0u: goto label_3f2fa0;
        case 0x3f2fa4u: goto label_3f2fa4;
        case 0x3f2fa8u: goto label_3f2fa8;
        case 0x3f2facu: goto label_3f2fac;
        case 0x3f2fb0u: goto label_3f2fb0;
        case 0x3f2fb4u: goto label_3f2fb4;
        case 0x3f2fb8u: goto label_3f2fb8;
        case 0x3f2fbcu: goto label_3f2fbc;
        case 0x3f2fc0u: goto label_3f2fc0;
        case 0x3f2fc4u: goto label_3f2fc4;
        case 0x3f2fc8u: goto label_3f2fc8;
        case 0x3f2fccu: goto label_3f2fcc;
        case 0x3f2fd0u: goto label_3f2fd0;
        case 0x3f2fd4u: goto label_3f2fd4;
        case 0x3f2fd8u: goto label_3f2fd8;
        case 0x3f2fdcu: goto label_3f2fdc;
        case 0x3f2fe0u: goto label_3f2fe0;
        case 0x3f2fe4u: goto label_3f2fe4;
        case 0x3f2fe8u: goto label_3f2fe8;
        case 0x3f2fecu: goto label_3f2fec;
        case 0x3f2ff0u: goto label_3f2ff0;
        case 0x3f2ff4u: goto label_3f2ff4;
        case 0x3f2ff8u: goto label_3f2ff8;
        case 0x3f2ffcu: goto label_3f2ffc;
        case 0x3f3000u: goto label_3f3000;
        case 0x3f3004u: goto label_3f3004;
        case 0x3f3008u: goto label_3f3008;
        case 0x3f300cu: goto label_3f300c;
        case 0x3f3010u: goto label_3f3010;
        case 0x3f3014u: goto label_3f3014;
        case 0x3f3018u: goto label_3f3018;
        case 0x3f301cu: goto label_3f301c;
        case 0x3f3020u: goto label_3f3020;
        case 0x3f3024u: goto label_3f3024;
        case 0x3f3028u: goto label_3f3028;
        case 0x3f302cu: goto label_3f302c;
        case 0x3f3030u: goto label_3f3030;
        case 0x3f3034u: goto label_3f3034;
        default: break;
    }

    ctx->pc = 0x3f2f40u;

label_3f2f40:
    // 0x3f2f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f2f44:
    // 0x3f2f44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f2f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3f2f48:
    // 0x3f2f48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3f2f4c:
    // 0x3f2f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2f50:
    // 0x3f2f50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f2f54:
    // 0x3f2f54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2f58:
    // 0x3f2f58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3f2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3f2f5c:
    // 0x3f2f5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f2f60:
    // 0x3f2f60: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3f2f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3f2f64:
    // 0x3f2f64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2f68:
    // 0x3f2f68: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2f6c:
    // 0x3f2f6c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2f70:
    // 0x3f2f70: 0x40f809  jalr        $v0
label_3f2f74:
    if (ctx->pc == 0x3F2F74u) {
        ctx->pc = 0x3F2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F70u;
        // 0x3f2f74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2F78u;
        goto label_3f2f78;
    }
    ctx->pc = 0x3F2F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2F78u);
        ctx->pc = 0x3F2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F70u;
        // 0x3f2f74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2F70u, 0x3F2F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2F78u;
label_3f2f78:
    // 0x3f2f78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f2f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2f7c:
    // 0x3f2f7c: 0xc0ea13a  jal         func_3A84E8
label_3f2f80:
    if (ctx->pc == 0x3F2F80u) {
        ctx->pc = 0x3F2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F7Cu;
        // 0x3f2f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2F84u;
        goto label_3f2f84;
    }
    ctx->pc = 0x3F2F7Cu;
    SET_GPR_U32(ctx, 31, 0x3F2F84u);
    ctx->pc = 0x3F2F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F7Cu;
    // 0x3f2f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3F2F7Cu, 0x3F2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F84u;
label_3f2f84:
    // 0x3f2f84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f2f84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f2f88:
    // 0x3f2f88: 0xc0ea146  jal         func_3A8518
label_3f2f8c:
    if (ctx->pc == 0x3F2F8Cu) {
        ctx->pc = 0x3F2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F88u;
        // 0x3f2f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2F90u;
        goto label_3f2f90;
    }
    ctx->pc = 0x3F2F88u;
    SET_GPR_U32(ctx, 31, 0x3F2F90u);
    ctx->pc = 0x3F2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F88u;
    // 0x3f2f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F2F88u, 0x3F2F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F90u;
label_3f2f90:
    // 0x3f2f90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f2f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2f94:
    // 0x3f2f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f2f98:
    // 0x3f2f98: 0xc0ea12a  jal         func_3A84A8
label_3f2f9c:
    if (ctx->pc == 0x3F2F9Cu) {
        ctx->pc = 0x3F2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F98u;
        // 0x3f2f9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2FA0u;
        goto label_3f2fa0;
    }
    ctx->pc = 0x3F2F98u;
    SET_GPR_U32(ctx, 31, 0x3F2FA0u);
    ctx->pc = 0x3F2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F98u;
    // 0x3f2f9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2F98u, 0x3F2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2FA0u;
label_3f2fa0:
    // 0x3f2fa0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3f2fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3f2fa4:
    // 0x3f2fa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f2fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f2fa8:
    // 0x3f2fa8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f2fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f2fac:
    // 0x3f2fac: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3f2facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3f2fb0:
    // 0x3f2fb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f2fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f2fb4:
    // 0x3f2fb4: 0xc0cd508  jal         func_335420
label_3f2fb8:
    if (ctx->pc == 0x3F2FB8u) {
        ctx->pc = 0x3F2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FB4u;
        // 0x3f2fb8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2FBCu;
        goto label_3f2fbc;
    }
    ctx->pc = 0x3F2FB4u;
    SET_GPR_U32(ctx, 31, 0x3F2FBCu);
    ctx->pc = 0x3F2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2FB4u;
    // 0x3f2fb8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F2FB4u, 0x3F2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2FBCu;
label_3f2fbc:
    // 0x3f2fbc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3f2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f2fc0:
    // 0x3f2fc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3f2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3f2fc4:
    // 0x3f2fc4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3f2fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3f2fc8:
    // 0x3f2fc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f2fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f2fcc:
    // 0x3f2fcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f2fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f2fd0:
    // 0x3f2fd0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3f2fd4:
    // 0x3f2fd4: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x3f2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
label_3f2fd8:
    // 0x3f2fd8: 0x34630033  ori         $v1, $v1, 0x33
    ctx->pc = 0x3f2fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51);
label_3f2fdc:
    // 0x3f2fdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f2fdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f2fe0:
    // 0x3f2fe0: 0xae1200b0  sw          $s2, 0xB0($s0)
    ctx->pc = 0x3f2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
label_3f2fe4:
    // 0x3f2fe4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f2fe8:
    // 0x3f2fe8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3f2fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3f2fec:
    // 0x3f2fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ff0:
    // 0x3f2ff0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3f2ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f2ff4:
    // 0x3f2ff4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3f2ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3f2ff8:
    // 0x3f2ff8: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x3f2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_3f2ffc:
    // 0x3f2ffc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f2ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3000:
    // 0x3f3000: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3f3000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3f3004:
    // 0x3f3004: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f3004u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f3008:
    // 0x3f3008: 0xc0e858c  jal         func_3A1630
label_3f300c:
    if (ctx->pc == 0x3F300Cu) {
        ctx->pc = 0x3F300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3008u;
        // 0x3f300c: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3010u;
        goto label_3f3010;
    }
    ctx->pc = 0x3F3008u;
    SET_GPR_U32(ctx, 31, 0x3F3010u);
    ctx->pc = 0x3F300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3008u;
    // 0x3f300c: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F3008u, 0x3F3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3010u;
label_3f3010:
    // 0x3f3010: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3f3010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3f3014:
    // 0x3f3014: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f3014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f3018:
    // 0x3f3018: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f3018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f301c:
    // 0x3f301c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f301cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3020:
    // 0x3f3020: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3f3020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3024:
    // 0x3f3024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f3024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f3028:
    // 0x3f3028: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3f3028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f302c:
    // 0x3f302c: 0x3e00008  jr          $ra
label_3f3030:
    if (ctx->pc == 0x3F3030u) {
        ctx->pc = 0x3F3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F302Cu;
        // 0x3f3030: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3034u;
        goto label_3f3034;
    }
    ctx->pc = 0x3F302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F302Cu;
        // 0x3f3030: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3034u;
label_3f3034:
    // 0x3f3034: 0x0  nop
    ctx->pc = 0x3f3034u;
    // NOP
    ctx->pc = 0x3f3038u;
}
