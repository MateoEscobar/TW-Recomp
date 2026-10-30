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

// Function: sub_001E7A00
// Address: 0x1e7a00 - 0x1e7b70
void sub_001E7A00_0x1e7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A00_0x1e7a00");
#endif

    switch (ctx->pc) {
        case 0x1e7ad8u: goto label_1e7ad8;
        case 0x1e7aecu: goto label_1e7aec;
        case 0x1e7b20u: goto label_1e7b20;
        case 0x1e7b2cu: goto label_1e7b2c;
        default: break;
    }

    ctx->pc = 0x1e7a00u;

    // 0x1e7a00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e7a04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e7a08: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e7a0c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x1e7a10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e7a14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e7a14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a18: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e7a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e7a1c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1e7a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a20: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e7a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e7a24: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e7a24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a28: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1e7a2c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1e7a2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a30: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e7a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e7a34: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1e7a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a38: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e7a3c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e7a40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7a44: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x1e7a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
    // 0x1e7a48: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e7a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e7a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7a50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7a54: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e7a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e7a58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A58u;
    {
        const bool branch_taken_0x1e7a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A58u;
        // 0x1e7a5c: 0xe560f2e0  swc1        $f0, -0xD20($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294963936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a58) {
            ctx->pc = 0x1E7A80u;
            goto label_1e7a80;
        }
    }
    ctx->pc = 0x1E7A60u;
    // 0x1e7a60: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e7a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e7a64: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7A64u;
    {
        const bool branch_taken_0x1e7a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A64u;
        // 0x1e7a68: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a64) {
            ctx->pc = 0x1E7A84u;
            goto label_1e7a84;
        }
    }
    ctx->pc = 0x1E7A6Cu;
    // 0x1e7a6c: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1e7a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
    // 0x1e7a70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e7a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e7a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7a78: 0x0  nop
    ctx->pc = 0x1e7a78u;
    // NOP
    // 0x1e7a7c: 0xe560f2e0  swc1        $f0, -0xD20($t3)
    ctx->pc = 0x1e7a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294963936), bits); }
label_1e7a80:
    // 0x1e7a80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e7a84:
    // 0x1e7a84: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e7a88: 0x8c52d310  lw          $s2, -0x2CF0($v0)
    ctx->pc = 0x1e7a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
    // 0x1e7a8c: 0x26700260  addiu       $s0, $s3, 0x260
    ctx->pc = 0x1e7a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
    // 0x1e7a90: 0x8faa00a0  lw          $t2, 0xA0($sp)
    ctx->pc = 0x1e7a90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7a94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e7a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7a98: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e7a9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7aa0: 0xae650050  sw          $a1, 0x50($s3)
    ctx->pc = 0x1e7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 5));
    // 0x1e7aa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e7aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7aa8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e7aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e7aac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e7aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e7ab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e7ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7ab4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e7ab4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ab8: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1e7ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x1e7abc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e7abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e7ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ac4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7ac8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e7ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7acc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e7accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e7ad0: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1E7AD0u;
    SET_GPR_U32(ctx, 31, 0x1E7AD8u);
    ctx->pc = 0x1E7AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AD0u;
    // 0x1e7ad4: 0x26710070  addiu       $s1, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E7AD0u, 0x1E7AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AD8u;
label_1e7ad8:
    // 0x1e7ad8: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1e7ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ae0: 0xc68d0008  lwc1        $f13, 0x8($s4)
    ctx->pc = 0x1e7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e7ae4: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1E7AE4u;
    SET_GPR_U32(ctx, 31, 0x1E7AECu);
    ctx->pc = 0x1E7AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AE4u;
    // 0x1e7ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E7AE4u, 0x1E7AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AECu;
label_1e7aec:
    // 0x1e7aec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7af0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e7af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7af4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7af8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e7b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e7b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7b08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e7b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7b0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e7b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b10: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e7b10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7b14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e7b14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b18: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1E7B18u;
    SET_GPR_U32(ctx, 31, 0x1E7B20u);
    ctx->pc = 0x1E7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B18u;
    // 0x1e7b1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1E7B18u, 0x1E7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B20u;
label_1e7b20:
    // 0x1e7b20: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1e7b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1e7b24: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1E7B24u;
    SET_GPR_U32(ctx, 31, 0x1E7B2Cu);
    ctx->pc = 0x1E7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B24u;
    // 0x1e7b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E7B24u, 0x1E7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B2Cu;
label_1e7b2c:
    // 0x1e7b2c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1e7b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e7b30: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e7b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7b34: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x1e7b34u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x1e7b38: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e7b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7b3c: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1e7b3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7b40: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e7b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7b44: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x1e7b44u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x1e7b48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e7b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7b4c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x1e7b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e7b50: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e7b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7b54: 0x7e620360  sq          $v0, 0x360($s3)
    ctx->pc = 0x1e7b54u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 864), GPR_VEC(ctx, 2));
    // 0x1e7b58: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e7b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7b5c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e7b5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B64u;
        // 0x1e7b68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7B6Cu;
    // 0x1e7b6c: 0x0  nop
    ctx->pc = 0x1e7b6cu;
    // NOP
    ctx->pc = 0x1e7b70u;
}
