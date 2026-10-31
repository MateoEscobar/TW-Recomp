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

// Function: sub_001E7898
// Address: 0x1e7898 - 0x1e7a00
void sub_001E7898_0x1e7898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7898_0x1e7898");
#endif

    switch (ctx->pc) {
        case 0x1e7968u: goto label_1e7968;
        case 0x1e7980u: goto label_1e7980;
        case 0x1e79b4u: goto label_1e79b4;
        case 0x1e79c0u: goto label_1e79c0;
        default: break;
    }

    ctx->pc = 0x1e7898u;

    // 0x1e7898: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e7898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e789c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e78a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e78a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e78a4: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1e78a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x1e78a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e78a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e78ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e78acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78b0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e78b4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1e78b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e78bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e78bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78c0: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1e78c4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1e78c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e78c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e78cc: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1e78ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e78d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e78d4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e78d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e78d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e78dc: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x1e78dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
    // 0x1e78e0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e78e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e78e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e78e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e78e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e78ec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e78ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e78f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E78F0u;
    {
        const bool branch_taken_0x1e78f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78F0u;
        // 0x1e78f4: 0xe580f2e0  swc1        $f0, -0xD20($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294963936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78f0) {
            ctx->pc = 0x1E7918u;
            goto label_1e7918;
        }
    }
    ctx->pc = 0x1E78F8u;
    // 0x1e78f8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e78fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E78FCu;
    {
        const bool branch_taken_0x1e78fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78FCu;
        // 0x1e7900: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78fc) {
            ctx->pc = 0x1E791Cu;
            goto label_1e791c;
        }
    }
    ctx->pc = 0x1E7904u;
    // 0x1e7904: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1e7904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
    // 0x1e7908: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e7908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e790c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e790cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7910: 0x0  nop
    ctx->pc = 0x1e7910u;
    // NOP
    // 0x1e7914: 0xe580f2e0  swc1        $f0, -0xD20($t4)
    ctx->pc = 0x1e7914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294963936), bits); }
label_1e7918:
    // 0x1e7918: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e7918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e791c:
    // 0x1e791c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1e791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e7920: 0x8c52d310  lw          $s2, -0x2CF0($v0)
    ctx->pc = 0x1e7920u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
    // 0x1e7924: 0x26700260  addiu       $s0, $s3, 0x260
    ctx->pc = 0x1e7924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
    // 0x1e7928: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e7928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e792c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e792cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7930: 0xae650050  sw          $a1, 0x50($s3)
    ctx->pc = 0x1e7930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 5));
    // 0x1e7934: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7938: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e7938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e793c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e793cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e7940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e7940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7944: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7948: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1e7948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x1e794c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e794cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e7950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e7950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7954: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e795c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e795cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e7960: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1E7960u;
    SET_GPR_U32(ctx, 31, 0x1E7968u);
    ctx->pc = 0x1E7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7960u;
    // 0x1e7964: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E7960u, 0x1E7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7968u;
label_1e7968:
    // 0x1e7968: 0x26710070  addiu       $s1, $s3, 0x70
    ctx->pc = 0x1e7968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x1e796c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1e796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7974: 0xc68d0008  lwc1        $f13, 0x8($s4)
    ctx->pc = 0x1e7974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e7978: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1E7978u;
    SET_GPR_U32(ctx, 31, 0x1E7980u);
    ctx->pc = 0x1E797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7978u;
    // 0x1e797c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E7978u, 0x1E7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7980u;
label_1e7980:
    // 0x1e7980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e7984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7988: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e798c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7994: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e7994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e7998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e799c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e799cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e79a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e79a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79a4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e79a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e79a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e79a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79ac: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1E79ACu;
    SET_GPR_U32(ctx, 31, 0x1E79B4u);
    ctx->pc = 0x1E79B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79ACu;
    // 0x1e79b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1E79ACu, 0x1E79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79B4u;
label_1e79b4:
    // 0x1e79b4: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1e79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1e79b8: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1E79B8u;
    SET_GPR_U32(ctx, 31, 0x1E79C0u);
    ctx->pc = 0x1E79BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79B8u;
    // 0x1e79bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E79B8u, 0x1E79C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79C0u;
label_1e79c0:
    // 0x1e79c0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1e79c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e79c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e79c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e79c8: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x1e79c8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x1e79cc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e79ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e79d0: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1e79d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e79d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e79d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e79d8: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x1e79d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x1e79dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e79dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e79e0: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x1e79e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e79e4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e79e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e79e8: 0x7e620360  sq          $v0, 0x360($s3)
    ctx->pc = 0x1e79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 864), GPR_VEC(ctx, 2));
    // 0x1e79ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e79ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e79f0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e79f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e79f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e79f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e79f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E79F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79F8u;
        // 0x1e79fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E79F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7A00u;
}
