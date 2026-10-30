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

// Function: sub_003A5FB0
// Address: 0x3a5fb0 - 0x3a61d8
void sub_003A5FB0_0x3a5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5FB0_0x3a5fb0");
#endif

    switch (ctx->pc) {
        case 0x3a6038u: goto label_3a6038;
        case 0x3a6060u: goto label_3a6060;
        case 0x3a6070u: goto label_3a6070;
        case 0x3a6084u: goto label_3a6084;
        case 0x3a6098u: goto label_3a6098;
        case 0x3a60ccu: goto label_3a60cc;
        case 0x3a60ecu: goto label_3a60ec;
        case 0x3a60f8u: goto label_3a60f8;
        case 0x3a6104u: goto label_3a6104;
        case 0x3a6118u: goto label_3a6118;
        case 0x3a6124u: goto label_3a6124;
        case 0x3a6130u: goto label_3a6130;
        case 0x3a613cu: goto label_3a613c;
        case 0x3a6148u: goto label_3a6148;
        case 0x3a6154u: goto label_3a6154;
        case 0x3a6160u: goto label_3a6160;
        case 0x3a6170u: goto label_3a6170;
        case 0x3a6178u: goto label_3a6178;
        default: break;
    }

    ctx->pc = 0x3a5fb0u;

    // 0x3a5fb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3a5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3a5fb4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3a5fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x3a5fb8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3a5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x3a5fbc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3a5fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a5fc0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3a5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x3a5fc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a5fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5fc8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3a5fcc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3a5fccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5fd0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3a5fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x3a5fd4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3a5fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5fd8: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x3a5fd8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3a5fdc: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3a5fdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5fe0: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x3a5fe0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3a5fe4: 0x46006ec6  mov.s       $f27, $f13
    ctx->pc = 0x3a5fe4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[13]);
    // 0x3a5fe8: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x3a5fe8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x3a5fec: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x3a5fecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x3a5ff0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3a5ff0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3a5ff4: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x3a5ff4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x3a5ff8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3a5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x3a5ffc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x3a5ffcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x3a6000: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3a6000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x3a6004: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x3a6004u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6008: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3a6008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x3a600c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3a600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x3a6010: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a6010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a6014: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x3a6014u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x3a6018: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x3a6018u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x3a601c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3a601cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3a6020: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3a6020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3a6024: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a6024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6028: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x3a6028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x3a602c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a602cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6030: 0xc0e97e0  jal         func_3A5F80
    ctx->pc = 0x3A6030u;
    SET_GPR_U32(ctx, 31, 0x3A6038u);
    ctx->pc = 0x3A6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6030u;
    // 0x3a6034: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5F80u, 0x3A6030u, 0x3A6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6038u;
label_3a6038:
    // 0x3a6038: 0x12a00052  beqz        $s5, . + 4 + (0x52 << 2)
    ctx->pc = 0x3A6038u;
    {
        const bool branch_taken_0x3a6038 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6038u;
        // 0x3a603c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6038) {
            ctx->pc = 0x3A6184u;
            goto label_3a6184;
        }
    }
    ctx->pc = 0x3A6040u;
    // 0x3a6040: 0x4600b5c7  neg.s       $f23, $f22
    ctx->pc = 0x3a6040u;
    ctx->f[23] = FPU_NEG_S(ctx->f[22]);
    // 0x3a6044: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3a6044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a604c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3a604cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3a6050: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3a6050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a6054: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x3a6054u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a6058: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3a6058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3a605c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a6060:
    // 0x3a6060: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a6060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a6064: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3a6064u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6068: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6068u;
    SET_GPR_U32(ctx, 31, 0x3A6070u);
    ctx->pc = 0x3A606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6068u;
    // 0x3a606c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6068u, 0x3A6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6070u;
label_3a6070:
    // 0x3a6070: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a6070u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6078: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a6078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a607c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A607Cu;
    SET_GPR_U32(ctx, 31, 0x3A6084u);
    ctx->pc = 0x3A6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A607Cu;
    // 0x3a6080: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A607Cu, 0x3A6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6084u;
label_3a6084:
    // 0x3a6084: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a6084u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a608c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x3a608cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x3a6090: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6090u;
    SET_GPR_U32(ctx, 31, 0x3A6098u);
    ctx->pc = 0x3A6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6090u;
    // 0x3a6094: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6090u, 0x3A6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6098u;
label_3a6098:
    // 0x3a6098: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x3a6098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3a609c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a609cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a60a0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x3a60a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3a60a4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3a60a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3a60a8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3a60a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3a60ac: 0xe6d8000c  swc1        $f24, 0xC($s6)
    ctx->pc = 0x3a60acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x3a60b0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3a60b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x3a60b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a60b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a60b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a60b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a60bc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3a60bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a60c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a60c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3a60c4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A60C4u;
    SET_GPR_U32(ctx, 31, 0x3A60CCu);
    ctx->pc = 0x3A60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A60C4u;
    // 0x3a60c8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A60C4u, 0x3A60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A60CCu;
label_3a60cc:
    // 0x3a60cc: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x3a60ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3a60d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A60D0u;
    {
        const bool branch_taken_0x3a60d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60D0u;
        // 0x3a60d4: 0x46190502  mul.s       $f20, $f0, $f25 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60d0) {
            ctx->pc = 0x3A60DCu;
            goto label_3a60dc;
        }
    }
    ctx->pc = 0x3A60D8u;
    // 0x3a60d8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3a60d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a60dc:
    // 0x3a60dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a60e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a60e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a60e4: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A60E4u;
    SET_GPR_U32(ctx, 31, 0x3A60ECu);
    ctx->pc = 0x3A60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A60E4u;
    // 0x3a60e8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A60E4u, 0x3A60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A60ECu;
label_3a60ec:
    // 0x3a60ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a60ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a60f0: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A60F0u;
    SET_GPR_U32(ctx, 31, 0x3A60F8u);
    ctx->pc = 0x3A60F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A60F0u;
    // 0x3a60f4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A60F0u, 0x3A60F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A60F8u;
label_3a60f8:
    // 0x3a60f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a60f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a60fc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A60FCu;
    SET_GPR_U32(ctx, 31, 0x3A6104u);
    ctx->pc = 0x3A6100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A60FCu;
    // 0x3a6100: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A60FCu, 0x3A6104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6104u;
label_3a6104:
    // 0x3a6104: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3a6104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x3a6108: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a6108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a610c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a610cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6110: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6110u;
    SET_GPR_U32(ctx, 31, 0x3A6118u);
    ctx->pc = 0x3A6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6110u;
    // 0x3a6114: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6110u, 0x3A6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6118u;
label_3a6118:
    // 0x3a6118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a611c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A611Cu;
    SET_GPR_U32(ctx, 31, 0x3A6124u);
    ctx->pc = 0x3A6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A611Cu;
    // 0x3a6120: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A611Cu, 0x3A6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6124u;
label_3a6124:
    // 0x3a6124: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6128: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6128u;
    SET_GPR_U32(ctx, 31, 0x3A6130u);
    ctx->pc = 0x3A612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6128u;
    // 0x3a612c: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6128u, 0x3A6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6130u;
label_3a6130:
    // 0x3a6130: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6134: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6134u;
    SET_GPR_U32(ctx, 31, 0x3A613Cu);
    ctx->pc = 0x3A6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6134u;
    // 0x3a6138: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6134u, 0x3A613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A613Cu;
label_3a613c:
    // 0x3a613c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6140: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6140u;
    SET_GPR_U32(ctx, 31, 0x3A6148u);
    ctx->pc = 0x3A6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6140u;
    // 0x3a6144: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6140u, 0x3A6148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6148u;
label_3a6148:
    // 0x3a6148: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3a6148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a614c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A614Cu;
    SET_GPR_U32(ctx, 31, 0x3A6154u);
    ctx->pc = 0x3A6150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A614Cu;
    // 0x3a6150: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A614Cu, 0x3A6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6154u;
label_3a6154:
    // 0x3a6154: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6158: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6158u;
    SET_GPR_U32(ctx, 31, 0x3A6160u);
    ctx->pc = 0x3A615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6158u;
    // 0x3a615c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6158u, 0x3A6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6160u;
label_3a6160:
    // 0x3a6160: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6164: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a6164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a6168: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A6168u;
    SET_GPR_U32(ctx, 31, 0x3A6170u);
    ctx->pc = 0x3A616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6168u;
    // 0x3a616c: 0x24451ac0  addiu       $a1, $v0, 0x1AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A6168u, 0x3A6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6170u;
label_3a6170:
    // 0x3a6170: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A6170u;
    SET_GPR_U32(ctx, 31, 0x3A6178u);
    ctx->pc = 0x3A6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6170u;
    // 0x3a6174: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A6170u, 0x3A6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6178u;
label_3a6178:
    // 0x3a6178: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x3a6178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3a617c: 0x5440ffb8  bnel        $v0, $zero, . + 4 + (-0x48 << 2)
    ctx->pc = 0x3A617Cu;
    {
        const bool branch_taken_0x3a617c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a617c) {
            ctx->pc = 0x3A6180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A617Cu;
            // 0x3a6180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6060;
        }
    }
    ctx->pc = 0x3A6184u;
label_3a6184:
    // 0x3a6184: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3a6184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3a6188: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3a6188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a618c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3a618cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a6190: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3a6190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a6194: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3a6194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a6198: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3a6198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a619c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3a619cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a61a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a61a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a61a4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3a61a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a61a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a61a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a61ac: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x3a61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3a61b0: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x3a61b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3a61b4: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x3a61b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3a61b8: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x3a61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3a61bc: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x3a61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3a61c0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3a61c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a61c4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3a61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a61c8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3a61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a61cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A61CCu;
        // 0x3a61d0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A61D4u;
    // 0x3a61d4: 0x0  nop
    ctx->pc = 0x3a61d4u;
    // NOP
    ctx->pc = 0x3a61d8u;
}
