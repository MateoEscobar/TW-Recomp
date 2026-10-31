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

// Function: sub_00398940
// Address: 0x398940 - 0x398cb0
void sub_00398940_0x398940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398940_0x398940");
#endif

    switch (ctx->pc) {
        case 0x39899cu: goto label_39899c;
        case 0x3989acu: goto label_3989ac;
        case 0x3989f0u: goto label_3989f0;
        case 0x398b08u: goto label_398b08;
        case 0x398b44u: goto label_398b44;
        case 0x398bc4u: goto label_398bc4;
        case 0x398c1cu: goto label_398c1c;
        case 0x398c28u: goto label_398c28;
        case 0x398c54u: goto label_398c54;
        case 0x398c74u: goto label_398c74;
        default: break;
    }

    ctx->pc = 0x398940u;

    // 0x398940: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x398940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x398944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x398944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x398948: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x398948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x39894c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x39894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x398950: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x398950u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398954: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x398954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x398958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x398958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39895c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x39895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x398960: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x398960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398964: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x398964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x398968: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x398968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39896c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x39896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x398970: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x398970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398974: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x398974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x398978: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x398978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39897c: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x39897cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x398980: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x398980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398984: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x398984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x398988: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x398988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x39898c: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x39898cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x398990: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398994: 0xc0e44f6  jal         func_3913D8
    ctx->pc = 0x398994u;
    SET_GPR_U32(ctx, 31, 0x39899Cu);
    ctx->pc = 0x398998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398994u;
    // 0x398998: 0xafab0010  sw          $t3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x398994u, 0x39899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39899Cu;
label_39899c:
    // 0x39899c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x39899cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3989a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989a4: 0xc0e613e  jal         func_3984F8
    ctx->pc = 0x3989A4u;
    SET_GPR_U32(ctx, 31, 0x3989ACu);
    ctx->pc = 0x3989A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989A4u;
    // 0x3989a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3984F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3984F8u, 0x3989A4u, 0x3989ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989ACu;
label_3989ac:
    // 0x3989ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3989acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3989b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3989b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989b4: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x3989b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3989b8: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3989b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3989bc: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x3989bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x3989c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3989c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3989c4: 0x26a60008  addiu       $a2, $s5, 0x8
    ctx->pc = 0x3989c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3989c8: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x3989c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3989cc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3989ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3989d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3989d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3989d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3989d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3989d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989dc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3989dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3989e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3989e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3989e4: 0x390c3  sra         $s2, $v1, 3
    ctx->pc = 0x3989e4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3989e8: 0xc13cf1c  jal         func_4F3C70
    ctx->pc = 0x3989E8u;
    SET_GPR_U32(ctx, 31, 0x3989F0u);
    ctx->pc = 0x3989ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989E8u;
    // 0x3989ec: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C70u, 0x3989E8u, 0x3989F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989F0u;
label_3989f0:
    // 0x3989f0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3989f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3989f4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3989f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3989f8: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x3989f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3989fc: 0x118d80  sll         $s1, $s1, 22
    ctx->pc = 0x3989fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 22));
    // 0x398a00: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x398a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398a04: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x398a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x398a08: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x398a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x398a0c: 0x33c53fff  andi        $a1, $fp, 0x3FFF
    ctx->pc = 0x398a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16383);
    // 0x398a10: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x398a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x398a14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x398a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x398a18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398a1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x398a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x398a20: 0xaeb30014  sw          $s3, 0x14($s5)
    ctx->pc = 0x398a20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 19));
    // 0x398a24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x398a28: 0xaeb4001c  sw          $s4, 0x1C($s5)
    ctx->pc = 0x398a28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 20));
    // 0x398a2c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x398a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x398a30: 0x32c40001  andi        $a0, $s6, 0x1
    ctx->pc = 0x398a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x398a34: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x398a34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x398a38: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x398A38u;
    {
        const bool branch_taken_0x398a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x398A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A38u;
        // 0x398a3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a38) {
            ctx->pc = 0x398A44u;
            goto label_398a44;
        }
    }
    ctx->pc = 0x398A40u;
    // 0x398a40: 0x87a20012  lh          $v0, 0x12($sp)
    ctx->pc = 0x398a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
label_398a44:
    // 0x398a44: 0xa6a20024  sh          $v0, 0x24($s5)
    ctx->pc = 0x398a44u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x398a48: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x398a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x398a4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398a50: 0x32c50001  andi        $a1, $s6, 0x1
    ctx->pc = 0x398a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x398a54: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x398a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x398a58: 0x3c06fffd  lui         $a2, 0xFFFD
    ctx->pc = 0x398a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65533 << 16));
    // 0x398a5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x398a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x398a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x398a64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x398a68: 0x52c40  sll         $a1, $a1, 17
    ctx->pc = 0x398a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x398a6c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x398a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x398a70: 0x162183  sra         $a0, $s6, 6
    ctx->pc = 0x398a70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 22), 6));
    // 0x398a74: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x398a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x398a78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x398a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x398a7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398a80: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x398a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x398a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x398a88: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x398a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x398a8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x398a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x398a90: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x398a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x398a94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398a98: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x398a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x398a9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x398aa0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x398aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x398aa4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x398aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x398aa8: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x398aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x398aac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398ab0: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x398ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x398ab4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x398ab8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x398ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x398abc: 0x3c05fdff  lui         $a1, 0xFDFF
    ctx->pc = 0x398abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65023 << 16));
    // 0x398ac0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x398ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x398ac4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x398ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x398ac8: 0x3c03c3ff  lui         $v1, 0xC3FF
    ctx->pc = 0x398ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50175 << 16));
    // 0x398acc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398ad0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x398ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x398ad4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x398ad8: 0x3c041800  lui         $a0, 0x1800
    ctx->pc = 0x398ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6144 << 16));
    // 0x398adc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x398adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x398ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x398ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398ae4: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x398ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x398ae8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x398ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x398aec: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x398AECu;
    {
        const bool branch_taken_0x398aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x398AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AECu;
        // 0x398af0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398aec) {
            ctx->pc = 0x398B14u;
            goto label_398b14;
        }
    }
    ctx->pc = 0x398AF4u;
    // 0x398af4: 0x96e5001c  lhu         $a1, 0x1C($s7)
    ctx->pc = 0x398af4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x398af8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x398af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x398afc: 0x248456f0  addiu       $a0, $a0, 0x56F0
    ctx->pc = 0x398afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22256));
    // 0x398b00: 0xc0e5e7e  jal         func_3979F8
    ctx->pc = 0x398B00u;
    SET_GPR_U32(ctx, 31, 0x398B08u);
    ctx->pc = 0x398B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B00u;
    // 0x398b04: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3979F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3979F8u, 0x398B00u, 0x398B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B08u;
label_398b08:
    // 0x398b08: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x398b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x398b0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x398b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x398b10: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x398b10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_398b14:
    // 0x398b14: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x398b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x398b18: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x398b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x398b1c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x398b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x398b20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x398b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x398b24: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x398b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x398b28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x398b28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x398b2c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x398b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x398b30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x398b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x398b34: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x398b34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x398b38: 0xaea50024  sw          $a1, 0x24($s5)
    ctx->pc = 0x398b38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 5));
    // 0x398b3c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x398B3Cu;
    SET_GPR_U32(ctx, 31, 0x398B44u);
    ctx->pc = 0x398B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B3Cu;
    // 0x398b40: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x398B3Cu, 0x398B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B44u;
label_398b44:
    // 0x398b44: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x398b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x398b48: 0x2462fff3  addiu       $v0, $v1, -0xD
    ctx->pc = 0x398b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x398b4c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x398b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x398b50: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x398B50u;
    {
        const bool branch_taken_0x398b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398b50) {
            ctx->pc = 0x398B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398B50u;
            // 0x398b54: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398B70u;
            goto label_398b70;
        }
    }
    ctx->pc = 0x398B58u;
    // 0x398b58: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x398b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x398b5c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398B5Cu;
    {
        const bool branch_taken_0x398b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x398B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B5Cu;
        // 0x398b60: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b5c) {
            ctx->pc = 0x398B6Cu;
            goto label_398b6c;
        }
    }
    ctx->pc = 0x398B64u;
    // 0x398b64: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x398B64u;
    {
        const bool branch_taken_0x398b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x398b64) {
            ctx->pc = 0x398B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398B64u;
            // 0x398b68: 0x8ea40024  lw          $a0, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398B84u;
            goto label_398b84;
        }
    }
    ctx->pc = 0x398B6Cu;
label_398b6c:
    // 0x398b6c: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x398b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_398b70:
    // 0x398b70: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x398b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x398b74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x398b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x398b78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x398b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x398b7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x398B7Cu;
    {
        const bool branch_taken_0x398b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B7Cu;
        // 0x398b80: 0xaea30024  sw          $v1, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b7c) {
            ctx->pc = 0x398BA4u;
            goto label_398ba4;
        }
    }
    ctx->pc = 0x398B84u;
label_398b84:
    // 0x398b84: 0x161043  sra         $v0, $s6, 1
    ctx->pc = 0x398b84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
    // 0x398b88: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x398b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x398b8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x398b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x398b90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x398b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x398b94: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x398b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x398b98: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x398b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x398b9c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x398b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x398ba0: 0xaea40024  sw          $a0, 0x24($s5)
    ctx->pc = 0x398ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 4));
label_398ba4:
    // 0x398ba4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x398ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x398ba8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x398BA8u;
    {
        const bool branch_taken_0x398ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x398BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BA8u;
        // 0x398bac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ba8) {
            ctx->pc = 0x398BCCu;
            goto label_398bcc;
        }
    }
    ctx->pc = 0x398BB0u;
    // 0x398bb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x398bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x398bb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398BB4u;
    {
        const bool branch_taken_0x398bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BB4u;
        // 0x398bb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398bb4) {
            ctx->pc = 0x398BCCu;
            goto label_398bcc;
        }
    }
    ctx->pc = 0x398BBCu;
    // 0x398bbc: 0xc10577a  jal         func_415DE8
    ctx->pc = 0x398BBCu;
    SET_GPR_U32(ctx, 31, 0x398BC4u);
    ctx->pc = 0x415DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE8u, 0x398BBCu, 0x398BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BC4u;
label_398bc4:
    // 0x398bc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x398BC4u;
    {
        const bool branch_taken_0x398bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BC4u;
        // 0x398bc8: 0xa6a20018  sh          $v0, 0x18($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398bc4) {
            ctx->pc = 0x398BD0u;
            goto label_398bd0;
        }
    }
    ctx->pc = 0x398BCCu;
label_398bcc:
    // 0x398bcc: 0xa6a20018  sh          $v0, 0x18($s5)
    ctx->pc = 0x398bccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
label_398bd0:
    // 0x398bd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x398bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x398bd4: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x398bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x398bd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x398bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x398bdc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x398BDCu;
    {
        const bool branch_taken_0x398bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BDCu;
        // 0x398be0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398bdc) {
            ctx->pc = 0x398BFCu;
            goto label_398bfc;
        }
    }
    ctx->pc = 0x398BE4u;
    // 0x398be4: 0x8ee20040  lw          $v0, 0x40($s7)
    ctx->pc = 0x398be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x398be8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x398be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x398becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x398bf0: 0xaee20040  sw          $v0, 0x40($s7)
    ctx->pc = 0x398bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 2));
    // 0x398bf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x398BF4u;
    {
        const bool branch_taken_0x398bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BF4u;
        // 0x398bf8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398bf4) {
            ctx->pc = 0x398C0Cu;
            goto label_398c0c;
        }
    }
    ctx->pc = 0x398BFCu;
label_398bfc:
    // 0x398bfc: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x398bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x398c00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x398c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x398c04: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x398c04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x398c08: 0xa7a00014  sh          $zero, 0x14($sp)
    ctx->pc = 0x398c08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 0));
label_398c0c:
    // 0x398c0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x398c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x398c10: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x398c10u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x398c14: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x398C14u;
    SET_GPR_U32(ctx, 31, 0x398C1Cu);
    ctx->pc = 0x398C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C14u;
    // 0x398c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x398C14u, 0x398C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C1Cu;
label_398c1c:
    // 0x398c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c20: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x398C20u;
    SET_GPR_U32(ctx, 31, 0x398C28u);
    ctx->pc = 0x398C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C20u;
    // 0x398c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x398C20u, 0x398C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C28u;
label_398c28:
    // 0x398c28: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x398c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x398c2c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x398c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x398c30: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x398c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x398c34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x398c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x398c38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x398c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x398c3c: 0x1444000e  bne         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x398C3Cu;
    {
        const bool branch_taken_0x398c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x398C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C3Cu;
        // 0x398c40: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c3c) {
            ctx->pc = 0x398C78u;
            goto label_398c78;
        }
    }
    ctx->pc = 0x398C44u;
    // 0x398c44: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x398c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x398c48: 0x8ca42c04  lw          $a0, 0x2C04($a1)
    ctx->pc = 0x398c48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x398c4c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x398C4Cu;
    SET_GPR_U32(ctx, 31, 0x398C54u);
    ctx->pc = 0x398C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C4Cu;
    // 0x398c50: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x398C4Cu, 0x398C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C54u;
label_398c54:
    // 0x398c54: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x398c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x398c58: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x398c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x398c5c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398C5Cu;
    {
        const bool branch_taken_0x398c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x398C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C5Cu;
        // 0x398c60: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c5c) {
            ctx->pc = 0x398C78u;
            goto label_398c78;
        }
    }
    ctx->pc = 0x398C64u;
    // 0x398c64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x398c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x398c68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x398c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c6c: 0xc0e6420  jal         func_399080
    ctx->pc = 0x398C6Cu;
    SET_GPR_U32(ctx, 31, 0x398C74u);
    ctx->pc = 0x398C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C6Cu;
    // 0x398c70: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399080u, 0x398C6Cu, 0x398C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C74u;
label_398c74:
    // 0x398c74: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x398c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_398c78:
    // 0x398c78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x398c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x398c7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x398c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x398c80: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x398c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x398c84: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x398c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x398c88: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x398c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x398c8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x398c8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x398c90: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x398c90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x398c94: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x398c94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398c98: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x398c98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398c9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x398CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CA0u;
        // 0x398ca4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398CA8u;
    // 0x398ca8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x398ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x398cac: 0x0  nop
    ctx->pc = 0x398cacu;
    // NOP
    ctx->pc = 0x398cb0u;
}
