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

// Function: sub_001A9890
// Address: 0x1a9890 - 0x1a9960
void sub_001A9890_0x1a9890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9890_0x1a9890");
#endif

    switch (ctx->pc) {
        case 0x1a9890u: goto label_1a9890;
        case 0x1a9894u: goto label_1a9894;
        case 0x1a9898u: goto label_1a9898;
        case 0x1a989cu: goto label_1a989c;
        case 0x1a98a0u: goto label_1a98a0;
        case 0x1a98a4u: goto label_1a98a4;
        case 0x1a98a8u: goto label_1a98a8;
        case 0x1a98acu: goto label_1a98ac;
        case 0x1a98b0u: goto label_1a98b0;
        case 0x1a98b4u: goto label_1a98b4;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98c0u: goto label_1a98c0;
        case 0x1a98c4u: goto label_1a98c4;
        case 0x1a98c8u: goto label_1a98c8;
        case 0x1a98ccu: goto label_1a98cc;
        case 0x1a98d0u: goto label_1a98d0;
        case 0x1a98d4u: goto label_1a98d4;
        case 0x1a98d8u: goto label_1a98d8;
        case 0x1a98dcu: goto label_1a98dc;
        case 0x1a98e0u: goto label_1a98e0;
        case 0x1a98e4u: goto label_1a98e4;
        case 0x1a98e8u: goto label_1a98e8;
        case 0x1a98ecu: goto label_1a98ec;
        case 0x1a98f0u: goto label_1a98f0;
        case 0x1a98f4u: goto label_1a98f4;
        case 0x1a98f8u: goto label_1a98f8;
        case 0x1a98fcu: goto label_1a98fc;
        case 0x1a9900u: goto label_1a9900;
        case 0x1a9904u: goto label_1a9904;
        case 0x1a9908u: goto label_1a9908;
        case 0x1a990cu: goto label_1a990c;
        case 0x1a9910u: goto label_1a9910;
        case 0x1a9914u: goto label_1a9914;
        case 0x1a9918u: goto label_1a9918;
        case 0x1a991cu: goto label_1a991c;
        case 0x1a9920u: goto label_1a9920;
        case 0x1a9924u: goto label_1a9924;
        case 0x1a9928u: goto label_1a9928;
        case 0x1a992cu: goto label_1a992c;
        case 0x1a9930u: goto label_1a9930;
        case 0x1a9934u: goto label_1a9934;
        case 0x1a9938u: goto label_1a9938;
        case 0x1a993cu: goto label_1a993c;
        case 0x1a9940u: goto label_1a9940;
        case 0x1a9944u: goto label_1a9944;
        case 0x1a9948u: goto label_1a9948;
        case 0x1a994cu: goto label_1a994c;
        case 0x1a9950u: goto label_1a9950;
        case 0x1a9954u: goto label_1a9954;
        case 0x1a9958u: goto label_1a9958;
        case 0x1a995cu: goto label_1a995c;
        default: break;
    }

    ctx->pc = 0x1a9890u;

label_1a9890:
    // 0x1a9890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a9894:
    // 0x1a9894: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a9894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9898:
    // 0x1a9898: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a9898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a989c:
    // 0x1a989c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a98a0:
    // 0x1a98a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a98a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a98a4:
    // 0x1a98a4: 0xc44cd34c  lwc1        $f12, -0x2CB4($v0)
    ctx->pc = 0x1a98a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a98a8:
    // 0x1a98a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a98a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a98ac:
    // 0x1a98ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a98acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a98b0:
    // 0x1a98b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a98b4:
    // 0x1a98b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a98b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a98b8:
    // 0x1a98b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a98b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a98bc:
    // 0x1a98bc: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1a98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_1a98c0:
    // 0x1a98c0: 0xc05e602  jal         func_179808
label_1a98c4:
    if (ctx->pc == 0x1A98C4u) {
        ctx->pc = 0x1A98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98C0u;
        // 0x1a98c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98C8u;
        goto label_1a98c8;
    }
    ctx->pc = 0x1A98C0u;
    SET_GPR_U32(ctx, 31, 0x1A98C8u);
    ctx->pc = 0x1A98C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98C0u;
    // 0x1a98c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1A98C0u, 0x1A98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98C8u;
label_1a98c8:
    // 0x1a98c8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a98c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a98cc:
    // 0x1a98cc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a98ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a98d0:
    // 0x1a98d0: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a98d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a98d4:
    // 0x1a98d4: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a98d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a98d8:
    // 0x1a98d8: 0xb242007f  sdl         $v0, 0x7F($s2)
    ctx->pc = 0x1a98d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a98dc:
    // 0x1a98dc: 0xb6420078  sdr         $v0, 0x78($s2)
    ctx->pc = 0x1a98dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a98e0:
    // 0x1a98e0: 0xb2430087  sdl         $v1, 0x87($s2)
    ctx->pc = 0x1a98e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a98e4:
    // 0x1a98e4: 0xb6430080  sdr         $v1, 0x80($s2)
    ctx->pc = 0x1a98e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a98e8:
    // 0x1a98e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a98e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a98ec:
    // 0x1a98ec: 0xc073478  jal         func_1CD1E0
label_1a98f0:
    if (ctx->pc == 0x1A98F0u) {
        ctx->pc = 0x1A98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98ECu;
        // 0x1a98f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A98F4u;
        goto label_1a98f4;
    }
    ctx->pc = 0x1A98ECu;
    SET_GPR_U32(ctx, 31, 0x1A98F4u);
    ctx->pc = 0x1A98F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98ECu;
    // 0x1a98f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A98ECu, 0x1A98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98F4u;
label_1a98f4:
    // 0x1a98f4: 0xc601017c  lwc1        $f1, 0x17C($s0)
    ctx->pc = 0x1a98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a98f8:
    // 0x1a98f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a98f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a98fc:
    // 0x1a98fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a98fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a9900:
    // 0x1a9900: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a9900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a9904:
    // 0x1a9904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9908:
    // 0x1a9908: 0xc6020178  lwc1        $f2, 0x178($s0)
    ctx->pc = 0x1a9908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a990c:
    // 0x1a990c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a990cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a9910:
    // 0x1a9910: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x1a9910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9914:
    // 0x1a9914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a9918:
    // 0x1a9918: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a9918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a991c:
    // 0x1a991c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a991cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a9920:
    // 0x1a9920: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1a9920u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a9924:
    // 0x1a9924: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1a9924u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a9928:
    // 0x1a9928: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a9928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a992c:
    // 0x1a992c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9930:
    // 0x1a9930: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1a9930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a9934:
    // 0x1a9934: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9938:
    // 0x1a9938: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a993c:
    // 0x1a993c: 0x60f809  jalr        $v1
label_1a9940:
    if (ctx->pc == 0x1A9940u) {
        ctx->pc = 0x1A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A993Cu;
        // 0x1a9940: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9944u;
        goto label_1a9944;
    }
    ctx->pc = 0x1A993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9944u);
        ctx->pc = 0x1A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A993Cu;
        // 0x1a9940: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A993Cu, 0x1A9944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9944u;
label_1a9944:
    // 0x1a9944: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a9944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9948:
    // 0x1a9948: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a9948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a994c:
    // 0x1a994c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a994cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9950:
    // 0x1a9950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9954:
    // 0x1a9954: 0x3e00008  jr          $ra
label_1a9958:
    if (ctx->pc == 0x1A9958u) {
        ctx->pc = 0x1A9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9954u;
        // 0x1a9958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A995Cu;
        goto label_1a995c;
    }
    ctx->pc = 0x1A9954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9954u;
        // 0x1a9958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A995Cu;
label_1a995c:
    // 0x1a995c: 0x0  nop
    ctx->pc = 0x1a995cu;
    // NOP
    ctx->pc = 0x1a9960u;
}
