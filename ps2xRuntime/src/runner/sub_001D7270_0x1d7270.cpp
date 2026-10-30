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

// Function: sub_001D7270
// Address: 0x1d7270 - 0x1d7350
void sub_001D7270_0x1d7270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7270_0x1d7270");
#endif

    switch (ctx->pc) {
        case 0x1d7288u: goto label_1d7288;
        case 0x1d72b8u: goto label_1d72b8;
        default: break;
    }

    ctx->pc = 0x1d7270u;

    // 0x1d7270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7274: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d7278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d727c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7280: 0xc075972  jal         func_1D65C8
    ctx->pc = 0x1D7280u;
    SET_GPR_U32(ctx, 31, 0x1D7288u);
    ctx->pc = 0x1D7284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7280u;
    // 0x1d7284: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65C8u, 0x1D7280u, 0x1D7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7288u;
label_1d7288:
    // 0x1d7288: 0x26110330  addiu       $s1, $s0, 0x330
    ctx->pc = 0x1d7288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1d728c: 0xc6010630  lwc1        $f1, 0x630($s0)
    ctx->pc = 0x1d728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7294: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d7294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d7298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d729c: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x1d729cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x1d72a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d72a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d72a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d72a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d72a8: 0x0  nop
    ctx->pc = 0x1d72a8u;
    // NOP
    // 0x1d72ac: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1d72acu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1d72b0: 0xc06887a  jal         func_1A21E8
    ctx->pc = 0x1D72B0u;
    SET_GPR_U32(ctx, 31, 0x1D72B8u);
    ctx->pc = 0x1D72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72B0u;
    // 0x1d72b4: 0xe6010288  swc1        $f1, 0x288($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1D72B0u, 0x1D72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72B8u;
label_1d72b8:
    // 0x1d72b8: 0x8e02063c  lw          $v0, 0x63C($s0)
    ctx->pc = 0x1d72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1596)));
    // 0x1d72bc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D72BCu;
    {
        const bool branch_taken_0x1d72bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d72bc) {
            ctx->pc = 0x1D72C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D72BCu;
            // 0x1d72c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D733Cu;
            goto label_1d733c;
        }
    }
    ctx->pc = 0x1D72C4u;
    // 0x1d72c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d72c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d72cc: 0xc443ed34  lwc1        $f3, -0x12CC($v0)
    ctx->pc = 0x1d72ccu;
    { uint32_t bits = FAST_READ32(0x50ED34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d72d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d72d4: 0xc484ed38  lwc1        $f4, -0x12C8($a0)
    ctx->pc = 0x1d72d4u;
    { uint32_t bits = FAST_READ32(0x50ED38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d72d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d72d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d72dc: 0x7a230090  lq          $v1, 0x90($s1)
    ctx->pc = 0x1d72dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1d72e0: 0xc6050268  lwc1        $f5, 0x268($s0)
    ctx->pc = 0x1d72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d72e4: 0xc6000260  lwc1        $f0, 0x260($s0)
    ctx->pc = 0x1d72e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d72e8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1d72e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1d72ec: 0x460329c0  add.s       $f7, $f5, $f3
    ctx->pc = 0x1d72ecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1d72f0: 0x46040180  add.s       $f6, $f0, $f4
    ctx->pc = 0x1d72f0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1d72f4: 0xc4a1ed30  lwc1        $f1, -0x12D0($a1)
    ctx->pc = 0x1d72f4u;
    { uint32_t bits = FAST_READ32(0x50ED30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d72f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1d72f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d72fc: 0xc60502d8  lwc1        $f5, 0x2D8($s0)
    ctx->pc = 0x1d72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d7300: 0xc60202d0  lwc1        $f2, 0x2D0($s0)
    ctx->pc = 0x1d7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7304: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d7304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d7308: 0xe6060260  swc1        $f6, 0x260($s0)
    ctx->pc = 0x1d7308u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1d730c: 0xe6070268  swc1        $f7, 0x268($s0)
    ctx->pc = 0x1d730cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x1d7310: 0x46041180  add.s       $f6, $f2, $f4
    ctx->pc = 0x1d7310u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1d7314: 0x460329c0  add.s       $f7, $f5, $f3
    ctx->pc = 0x1d7314u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1d7318: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1d7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d731c: 0xae06063c  sw          $a2, 0x63C($s0)
    ctx->pc = 0x1d731cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1596), GPR_U32(ctx, 6));
    // 0x1d7320: 0xe60102c0  swc1        $f1, 0x2C0($s0)
    ctx->pc = 0x1d7320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x1d7324: 0xe60002c4  swc1        $f0, 0x2C4($s0)
    ctx->pc = 0x1d7324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    // 0x1d7328: 0xe60602d0  swc1        $f6, 0x2D0($s0)
    ctx->pc = 0x1d7328u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x1d732c: 0xe60702d8  swc1        $f7, 0x2D8($s0)
    ctx->pc = 0x1d732cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x1d7330: 0xe6010250  swc1        $f1, 0x250($s0)
    ctx->pc = 0x1d7330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x1d7334: 0xe6000254  swc1        $f0, 0x254($s0)
    ctx->pc = 0x1d7334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
    // 0x1d7338: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d7338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d733c:
    // 0x1d733c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d733cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7344: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7344u;
        // 0x1d7348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D734Cu;
    // 0x1d734c: 0x0  nop
    ctx->pc = 0x1d734cu;
    // NOP
    ctx->pc = 0x1d7350u;
}
