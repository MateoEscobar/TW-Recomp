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

// Function: sub_003A5AD8
// Address: 0x3a5ad8 - 0x3a5f80
void sub_003A5AD8_0x3a5ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5AD8_0x3a5ad8");
#endif

    switch (ctx->pc) {
        case 0x3a5b4cu: goto label_3a5b4c;
        case 0x3a5bb8u: goto label_3a5bb8;
        case 0x3a5bd0u: goto label_3a5bd0;
        case 0x3a5becu: goto label_3a5bec;
        case 0x3a5c10u: goto label_3a5c10;
        case 0x3a5c2cu: goto label_3a5c2c;
        case 0x3a5c40u: goto label_3a5c40;
        case 0x3a5c5cu: goto label_3a5c5c;
        case 0x3a5ca0u: goto label_3a5ca0;
        case 0x3a5cacu: goto label_3a5cac;
        case 0x3a5cb8u: goto label_3a5cb8;
        case 0x3a5cc4u: goto label_3a5cc4;
        case 0x3a5cd0u: goto label_3a5cd0;
        case 0x3a5ce0u: goto label_3a5ce0;
        case 0x3a5cf4u: goto label_3a5cf4;
        case 0x3a5cfcu: goto label_3a5cfc;
        case 0x3a5d20u: goto label_3a5d20;
        case 0x3a5d68u: goto label_3a5d68;
        case 0x3a5d78u: goto label_3a5d78;
        case 0x3a5d8cu: goto label_3a5d8c;
        case 0x3a5da8u: goto label_3a5da8;
        case 0x3a5dc4u: goto label_3a5dc4;
        case 0x3a5de0u: goto label_3a5de0;
        case 0x3a5df4u: goto label_3a5df4;
        case 0x3a5e08u: goto label_3a5e08;
        case 0x3a5e40u: goto label_3a5e40;
        case 0x3a5e64u: goto label_3a5e64;
        case 0x3a5e7cu: goto label_3a5e7c;
        case 0x3a5e88u: goto label_3a5e88;
        case 0x3a5e94u: goto label_3a5e94;
        case 0x3a5ea8u: goto label_3a5ea8;
        case 0x3a5eb4u: goto label_3a5eb4;
        case 0x3a5ec0u: goto label_3a5ec0;
        case 0x3a5ed0u: goto label_3a5ed0;
        case 0x3a5edcu: goto label_3a5edc;
        case 0x3a5ef8u: goto label_3a5ef8;
        case 0x3a5f08u: goto label_3a5f08;
        case 0x3a5f10u: goto label_3a5f10;
        default: break;
    }

    ctx->pc = 0x3a5ad8u;

    // 0x3a5ad8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3a5ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3a5adc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a5ae0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3a5ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3a5ae4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a5ae8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3a5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3a5aec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a5af0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3a5af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3a5af4: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3a5af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5af8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3a5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3a5afc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a5afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b00: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3a5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3a5b04: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3a5b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3a5b08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3a5b0c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3a5b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x3a5b10: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3a5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x3a5b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a5b18: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x3a5b18u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3a5b1c: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x3a5b1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3a5b20: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x3a5b20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3a5b24: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x3a5b24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3a5b28: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x3a5b28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3a5b2c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3a5b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3a5b30: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x3a5b30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5b34: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3a5b34u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x5116C0u));
    // 0x3a5b38: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3a5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x3a5b3c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3a5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3a5b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b44: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A5B44u;
    SET_GPR_U32(ctx, 31, 0x3A5B4Cu);
    ctx->pc = 0x3A5B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B44u;
    // 0x3a5b48: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A5B44u, 0x3A5B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B4Cu;
label_3a5b4c:
    // 0x3a5b4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a5b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a5b50: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x3A5B50u;
    {
        const bool branch_taken_0x3a5b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B50u;
        // 0x3a5b54: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b50) {
            ctx->pc = 0x3A5D0Cu;
            goto label_3a5d0c;
        }
    }
    ctx->pc = 0x3A5B58u;
    // 0x3a5b58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3a5b5c: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3a5b5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x3a5b60: 0x2453b8b8  addiu       $s3, $v0, -0x4748
    ctx->pc = 0x3a5b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a5b64: 0x3c16a3a3  lui         $s6, 0xA3A3
    ctx->pc = 0x3a5b64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41891 << 16));
    // 0x3a5b68: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3a5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a5b6c: 0x3c01bfb7  lui         $at, 0xBFB7
    ctx->pc = 0x3a5b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49079 << 16));
    // 0x3a5b70: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x3a5b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x3a5b74: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3a5b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x3a5b78: 0x3c013fb7  lui         $at, 0x3FB7
    ctx->pc = 0x3a5b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16311 << 16));
    // 0x3a5b7c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x3a5b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x3a5b80: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3a5b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3a5b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a5b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b88: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3a5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3a5b8c: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x3a5b8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a5b90: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3a5b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3a5b94: 0x36f70030  ori         $s7, $s7, 0x30
    ctx->pc = 0x3a5b94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)48);
    // 0x3a5b98: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a5b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a5b9c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a5b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a5ba0: 0x36d6a330  ori         $s6, $s6, 0xA330
    ctx->pc = 0x3a5ba0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)41776);
    // 0x3a5ba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a5ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a5ba8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a5ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a5bac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a5bacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3a5bb0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3a5bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3a5bb4: 0x0  nop
    ctx->pc = 0x3a5bb4u;
    // NOP
label_3a5bb8:
    // 0x3a5bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bbc: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3a5bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3a5bc0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3a5bc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3a5bc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a5bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3a5bc8: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5BC8u;
    SET_GPR_U32(ctx, 31, 0x3A5BD0u);
    ctx->pc = 0x3A5BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BC8u;
    // 0x3a5bcc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5BC8u, 0x3A5BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BD0u;
label_3a5bd0:
    // 0x3a5bd0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3a5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5bd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bd8: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3a5bd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3a5bdc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3a5bdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3a5be0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a5be0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a5be4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5BE4u;
    SET_GPR_U32(ctx, 31, 0x3A5BECu);
    ctx->pc = 0x3A5BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BE4u;
    // 0x3a5be8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5BE4u, 0x3A5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BECu;
label_3a5bec:
    // 0x3a5bec: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3a5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5bf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bf4: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x3a5bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x3a5bf8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3a5bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x3a5bfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a5bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a5c00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a5c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a5c04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a5c04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a5c08: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5C08u;
    SET_GPR_U32(ctx, 31, 0x3A5C10u);
    ctx->pc = 0x3A5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C08u;
    // 0x3a5c0c: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5C08u, 0x3A5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C10u;
label_3a5c10:
    // 0x3a5c10: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3a5c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5c18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a5c1c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3a5c1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3a5c20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a5c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a5c24: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5C24u;
    SET_GPR_U32(ctx, 31, 0x3A5C2Cu);
    ctx->pc = 0x3A5C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C24u;
    // 0x3a5c28: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5C24u, 0x3A5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C2Cu;
label_3a5c2c:
    // 0x3a5c2c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a5c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3a5c30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c34: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5c34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a5c38: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5C38u;
    SET_GPR_U32(ctx, 31, 0x3A5C40u);
    ctx->pc = 0x3A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C38u;
    // 0x3a5c3c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5C38u, 0x3A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C40u;
label_3a5c40:
    // 0x3a5c40: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x3a5c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
    // 0x3a5c44: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3a5c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x3a5c48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a5c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a5c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c50: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3a5c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3a5c54: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5C54u;
    SET_GPR_U32(ctx, 31, 0x3A5C5Cu);
    ctx->pc = 0x3A5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C54u;
    // 0x3a5c58: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5C54u, 0x3A5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C5Cu;
label_3a5c5c:
    // 0x3a5c5c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5C5Cu;
    {
        const bool branch_taken_0x3a5c5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C5Cu;
        // 0x3a5c60: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c5c) {
            ctx->pc = 0x3A5C7Cu;
            goto label_3a5c7c;
        }
    }
    ctx->pc = 0x3A5C64u;
    // 0x3a5c64: 0x3c123b38  lui         $s2, 0x3B38
    ctx->pc = 0x3a5c64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15160 << 16));
    // 0x3a5c68: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3a5c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x3a5c6c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3a5c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x3a5c70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a5c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a5c74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5C74u;
    {
        const bool branch_taken_0x3a5c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C74u;
        // 0x3a5c78: 0x36522d50  ori         $s2, $s2, 0x2D50 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)11600);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c74) {
            ctx->pc = 0x3A5C88u;
            goto label_3a5c88;
        }
    }
    ctx->pc = 0x3A5C7Cu;
label_3a5c7c:
    // 0x3a5c7c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3a5c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x3a5c80: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3a5c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x3a5c84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a5c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a5c88:
    // 0x3a5c88: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x3a5c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x3a5c8c: 0x3a030002  xori        $v1, $s0, 0x2
    ctx->pc = 0x3a5c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x3a5c90: 0x2e2900a  movz        $s2, $s7, $v0
    ctx->pc = 0x3a5c90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 23));
    // 0x3a5c94: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5c98: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A5C98u;
    SET_GPR_U32(ctx, 31, 0x3A5CA0u);
    ctx->pc = 0x3A5C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C98u;
    // 0x3a5c9c: 0x2c3900a  movz        $s2, $s6, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A5C98u, 0x3A5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CA0u;
label_3a5ca0:
    // 0x3a5ca0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3a5ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a5ca4: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5CA4u;
    SET_GPR_U32(ctx, 31, 0x3A5CACu);
    ctx->pc = 0x3A5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CA4u;
    // 0x3a5ca8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5CA4u, 0x3A5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CACu;
label_3a5cac:
    // 0x3a5cac: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5cb0: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5CB0u;
    SET_GPR_U32(ctx, 31, 0x3A5CB8u);
    ctx->pc = 0x3A5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CB0u;
    // 0x3a5cb4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5CB0u, 0x3A5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CB8u;
label_3a5cb8:
    // 0x3a5cb8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5cbc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A5CBCu;
    SET_GPR_U32(ctx, 31, 0x3A5CC4u);
    ctx->pc = 0x3A5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CBCu;
    // 0x3a5cc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A5CBCu, 0x3A5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CC4u;
label_3a5cc4:
    // 0x3a5cc4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5cc8: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A5CC8u;
    SET_GPR_U32(ctx, 31, 0x3A5CD0u);
    ctx->pc = 0x3A5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CC8u;
    // 0x3a5ccc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A5CC8u, 0x3A5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CD0u;
label_3a5cd0:
    // 0x3a5cd0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5cd4: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x3a5cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x3a5cd8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A5CD8u;
    SET_GPR_U32(ctx, 31, 0x3A5CE0u);
    ctx->pc = 0x3A5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CD8u;
    // 0x3a5cdc: 0x2b0280b  movn        $a1, $s5, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A5CD8u, 0x3A5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CE0u;
label_3a5ce0:
    // 0x3a5ce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a5ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a5ce4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5ce8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a5cec: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A5CECu;
    SET_GPR_U32(ctx, 31, 0x3A5CF4u);
    ctx->pc = 0x3A5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CECu;
    // 0x3a5cf0: 0x24451ab0  addiu       $a1, $v0, 0x1AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A5CECu, 0x3A5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CF4u;
label_3a5cf4:
    // 0x3a5cf4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A5CF4u;
    SET_GPR_U32(ctx, 31, 0x3A5CFCu);
    ctx->pc = 0x3A5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CF4u;
    // 0x3a5cf8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A5CF4u, 0x3A5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CFCu;
label_3a5cfc:
    // 0x3a5cfc: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3a5cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a5d00: 0x5440ffad  bnel        $v0, $zero, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3A5D00u;
    {
        const bool branch_taken_0x3a5d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5d00) {
            ctx->pc = 0x3A5D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5D00u;
            // 0x3a5d04: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5bb8;
        }
    }
    ctx->pc = 0x3A5D08u;
    // 0x3a5d08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a5d0c:
    // 0x3a5d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d10: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x3a5d14: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x3a5d14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a5d18: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A5D18u;
    SET_GPR_U32(ctx, 31, 0x3A5D20u);
    ctx->pc = 0x3A5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5D18u;
    // 0x3a5d1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A5D18u, 0x3A5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D20u;
label_3a5d20:
    // 0x3a5d20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a5d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a5d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5d28: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x3a5d28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x3a5d2c: 0x13c00080  beqz        $fp, . + 4 + (0x80 << 2)
    ctx->pc = 0x3A5D2Cu;
    {
        const bool branch_taken_0x3a5d2c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D2Cu;
        // 0x3a5d30: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d2c) {
            ctx->pc = 0x3A5F30u;
            goto label_3a5f30;
        }
    }
    ctx->pc = 0x3A5D34u;
    // 0x3a5d34: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x3a5d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
    // 0x3a5d38: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3a5d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x3a5d3c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3a5d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3a5d40: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x3a5d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x3a5d44: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3a5d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x3a5d48: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3a5d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3a5d4c: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3a5d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a5d50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a5d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a5d54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a5d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a5d58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a5d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a5d5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a5d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a5d60: 0x32160001  andi        $s6, $s0, 0x1
    ctx->pc = 0x3a5d60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3a5d64: 0x0  nop
    ctx->pc = 0x3a5d64u;
    // NOP
label_3a5d68:
    // 0x3a5d68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a5d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d6c: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x3a5d6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a5d70: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3a5d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3a5d74: 0x0  nop
    ctx->pc = 0x3a5d74u;
    // NOP
label_3a5d78:
    // 0x3a5d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d7c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3a5d7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3a5d80: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a5d80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x3a5d84: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5D84u;
    SET_GPR_U32(ctx, 31, 0x3A5D8Cu);
    ctx->pc = 0x3A5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5D84u;
    // 0x3a5d88: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5D84u, 0x3A5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D8Cu;
label_3a5d8c:
    // 0x3a5d8c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x3a5d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d94: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3a5d94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3a5d98: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a5d98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x3a5d9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a5d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a5da0: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5DA0u;
    SET_GPR_U32(ctx, 31, 0x3A5DA8u);
    ctx->pc = 0x3A5DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DA0u;
    // 0x3a5da4: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5DA0u, 0x3A5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DA8u;
label_3a5da8:
    // 0x3a5da8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3a5da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5dac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5db0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a5db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a5db4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a5db4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x3a5db8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a5db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a5dbc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5DBCu;
    SET_GPR_U32(ctx, 31, 0x3A5DC4u);
    ctx->pc = 0x3A5DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DBCu;
    // 0x3a5dc0: 0xe6810004  swc1        $f1, 0x4($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5DBCu, 0x3A5DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DC4u;
label_3a5dc4:
    // 0x3a5dc4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3a5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5dcc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5dccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a5dd0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3a5dd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3a5dd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a5dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a5dd8: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5DD8u;
    SET_GPR_U32(ctx, 31, 0x3A5DE0u);
    ctx->pc = 0x3A5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DD8u;
    // 0x3a5ddc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5DD8u, 0x3A5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DE0u;
label_3a5de0:
    // 0x3a5de0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a5de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3a5de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5de8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5de8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a5dec: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5DECu;
    SET_GPR_U32(ctx, 31, 0x3A5DF4u);
    ctx->pc = 0x3A5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DECu;
    // 0x3a5df0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5DECu, 0x3A5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DF4u;
label_3a5df4:
    // 0x3a5df4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3a5df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3a5df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5dfc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5dfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a5e00: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5E00u;
    SET_GPR_U32(ctx, 31, 0x3A5E08u);
    ctx->pc = 0x3A5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E00u;
    // 0x3a5e04: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5E00u, 0x3A5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E08u;
label_3a5e08:
    // 0x3a5e08: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x3a5e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a5e0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A5E0Cu;
    {
        const bool branch_taken_0x3a5e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E0Cu;
        // 0x3a5e10: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e0c) {
            ctx->pc = 0x3A5E48u;
            goto label_3a5e48;
        }
    }
    ctx->pc = 0x3A5E14u;
    // 0x3a5e14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3a5e18: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3a5e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x3a5e1c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3a5e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3a5e20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a5e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a5e24: 0x34420036  ori         $v0, $v0, 0x36
    ctx->pc = 0x3a5e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
    // 0x3a5e28: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3a5e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x3a5e2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a5e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a5e30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a5e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a5e34: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x3a5e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3a5e38: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5E38u;
    SET_GPR_U32(ctx, 31, 0x3A5E40u);
    ctx->pc = 0x3A5E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E38u;
    // 0x3a5e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5E38u, 0x3A5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E40u;
label_3a5e40:
    // 0x3a5e40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5E40u;
    {
        const bool branch_taken_0x3a5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E40u;
        // 0x3a5e44: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e40) {
            ctx->pc = 0x3A5E5Cu;
            goto label_3a5e5c;
        }
    }
    ctx->pc = 0x3A5E48u;
label_3a5e48:
    // 0x3a5e48: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x3a5e48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x3a5e4c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3a5e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x3a5e50: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3a5e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3a5e54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a5e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a5e58: 0x36310010  ori         $s1, $s1, 0x10
    ctx->pc = 0x3a5e58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
label_3a5e5c:
    // 0x3a5e5c: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3A5E5Cu;
    SET_GPR_U32(ctx, 31, 0x3A5E64u);
    ctx->pc = 0x3A5E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E5Cu;
    // 0x3a5e60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A5E5Cu, 0x3A5E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E64u;
label_3a5e64:
    // 0x3a5e64: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A5E64u;
    {
        const bool branch_taken_0x3a5e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5e64) {
            ctx->pc = 0x3A5E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5E64u;
            // 0x3a5e68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5F14u;
            goto label_3a5f14;
        }
    }
    ctx->pc = 0x3A5E6Cu;
    // 0x3a5e6c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3a5e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3a5e70: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3a5e70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5e74: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A5E74u;
    SET_GPR_U32(ctx, 31, 0x3A5E7Cu);
    ctx->pc = 0x3A5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E74u;
    // 0x3a5e78: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A5E74u, 0x3A5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E7Cu;
label_3a5e7c:
    // 0x3a5e7c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5e80: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5E80u;
    SET_GPR_U32(ctx, 31, 0x3A5E88u);
    ctx->pc = 0x3A5E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E80u;
    // 0x3a5e84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5E80u, 0x3A5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E88u;
label_3a5e88:
    // 0x3a5e88: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5e8c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A5E94u);
    ctx->pc = 0x3A5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5E8Cu;
    // 0x3a5e90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5E8Cu, 0x3A5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5E94u;
label_3a5e94:
    // 0x3a5e94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a5e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a5e98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a5e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a5e9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a5e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a5ea0: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A5EA0u;
    SET_GPR_U32(ctx, 31, 0x3A5EA8u);
    ctx->pc = 0x3A5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EA0u;
    // 0x3a5ea4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A5EA0u, 0x3A5EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EA8u;
label_3a5ea8:
    // 0x3a5ea8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5eac: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A5EACu;
    SET_GPR_U32(ctx, 31, 0x3A5EB4u);
    ctx->pc = 0x3A5EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EACu;
    // 0x3a5eb0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A5EACu, 0x3A5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EB4u;
label_3a5eb4:
    // 0x3a5eb4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5eb8: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A5EB8u;
    SET_GPR_U32(ctx, 31, 0x3A5EC0u);
    ctx->pc = 0x3A5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EB8u;
    // 0x3a5ebc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A5EB8u, 0x3A5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EC0u;
label_3a5ec0:
    // 0x3a5ec0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5ec4: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x3a5ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x3a5ec8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A5EC8u;
    SET_GPR_U32(ctx, 31, 0x3A5ED0u);
    ctx->pc = 0x3A5ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EC8u;
    // 0x3a5ecc: 0x34a580ff  ori         $a1, $a1, 0x80FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33023);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A5EC8u, 0x3A5ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5ED0u;
label_3a5ed0:
    // 0x3a5ed0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5ed4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A5ED4u;
    SET_GPR_U32(ctx, 31, 0x3A5EDCu);
    ctx->pc = 0x3A5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5ED4u;
    // 0x3a5ed8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A5ED4u, 0x3A5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EDCu;
label_3a5edc:
    // 0x3a5edc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5EDCu;
    {
        const bool branch_taken_0x3a5edc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5EDCu;
        // 0x3a5ee0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5edc) {
            ctx->pc = 0x3A5EF0u;
            goto label_3a5ef0;
        }
    }
    ctx->pc = 0x3A5EE4u;
    // 0x3a5ee4: 0x2415008e  addiu       $s5, $zero, 0x8E
    ctx->pc = 0x3a5ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x3a5ee8: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x3a5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3a5eec: 0x56a80a  movz        $s5, $v0, $s6
    ctx->pc = 0x3a5eecu;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_3a5ef0:
    // 0x3a5ef0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A5EF0u;
    SET_GPR_U32(ctx, 31, 0x3A5EF8u);
    ctx->pc = 0x3A5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EF0u;
    // 0x3a5ef4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A5EF0u, 0x3A5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EF8u;
label_3a5ef8:
    // 0x3a5ef8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a5ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a5efc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a5f00: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A5F00u;
    SET_GPR_U32(ctx, 31, 0x3A5F08u);
    ctx->pc = 0x3A5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F00u;
    // 0x3a5f04: 0x24451ac0  addiu       $a1, $v0, 0x1AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A5F00u, 0x3A5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F08u;
label_3a5f08:
    // 0x3a5f08: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A5F08u;
    SET_GPR_U32(ctx, 31, 0x3A5F10u);
    ctx->pc = 0x3A5F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F08u;
    // 0x3a5f0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A5F08u, 0x3A5F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F10u;
label_3a5f10:
    // 0x3a5f10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a5f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a5f14:
    // 0x3a5f14: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x3a5f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a5f18: 0x5440ff97  bnel        $v0, $zero, . + 4 + (-0x69 << 2)
    ctx->pc = 0x3A5F18u;
    {
        const bool branch_taken_0x3a5f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5f18) {
            ctx->pc = 0x3A5F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5F18u;
            // 0x3a5f1c: 0x7a820000  lq          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5d78;
        }
    }
    ctx->pc = 0x3A5F20u;
    // 0x3a5f20: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3a5f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f24: 0x21e102b  sltu        $v0, $s0, $fp
    ctx->pc = 0x3a5f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x3a5f28: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x3A5F28u;
    {
        const bool branch_taken_0x3a5f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F28u;
        // 0x3a5f2c: 0x32160001  andi        $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f28) {
            ctx->pc = 0x3A5D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5d68;
        }
    }
    ctx->pc = 0x3A5F30u;
label_3a5f30:
    // 0x3a5f30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a5f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a5f34: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3a5f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a5f38: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3a5f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a5f3c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3a5f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a5f40: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3a5f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a5f44: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3a5f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a5f48: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3a5f48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a5f4c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a5f4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a5f50: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3a5f50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a5f54: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3a5f54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a5f58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a5f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a5f5c: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x3a5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3a5f60: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x3a5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3a5f64: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x3a5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3a5f68: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x3a5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a5f6c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x3a5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a5f70: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3a5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a5f74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F74u;
        // 0x3a5f78: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5F7Cu;
    // 0x3a5f7c: 0x0  nop
    ctx->pc = 0x3a5f7cu;
    // NOP
    ctx->pc = 0x3a5f80u;
}
