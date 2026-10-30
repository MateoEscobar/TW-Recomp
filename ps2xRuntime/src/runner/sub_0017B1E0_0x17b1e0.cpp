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

// Function: sub_0017B1E0
// Address: 0x17b1e0 - 0x17b2e0
void sub_0017B1E0_0x17b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B1E0_0x17b1e0");
#endif

    ctx->pc = 0x17b1e0u;

    // 0x17b1e0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x17b1e4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x17b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x17b1e8: 0x8d83ccd4  lw          $v1, -0x332C($t4)
    ctx->pc = 0x17b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CCD4u));
    // 0x17b1ec: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x17b1ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x17b1f4: 0xc54100b4  lwc1        $f1, 0xB4($t2)
    ctx->pc = 0x17b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b1f8: 0x662818  mult        $a1, $v1, $a2
    ctx->pc = 0x17b1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17b1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b200: 0x244bd330  addiu       $t3, $v0, -0x2CD0
    ctx->pc = 0x17b200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x17b204: 0x2544004c  addiu       $a0, $t2, 0x4C
    ctx->pc = 0x17b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 76));
    // 0x17b208: 0xab1021  addu        $v0, $a1, $t3
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x17b20c: 0xe44100b4  swc1        $f1, 0xB4($v0)
    ctx->pc = 0x17b20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x17b210: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17b210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17b214: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17b214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17b218: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17b218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17b21c: 0x9143002c  lbu         $v1, 0x2C($t2)
    ctx->pc = 0x17b21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x17b220: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x17b220u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b224: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x17b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b228: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x17b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x17b22c: 0xc541001c  lwc1        $f1, 0x1C($t2)
    ctx->pc = 0x17b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b230: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B230u;
    {
        const bool branch_taken_0x17b230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B230u;
        // 0x17b234: 0xe441001c  swc1        $f1, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b230) {
            ctx->pc = 0x17B250u;
            goto label_17b250;
        }
    }
    ctx->pc = 0x17B238u;
    // 0x17b238: 0x2562004c  addiu       $v0, $t3, 0x4C
    ctx->pc = 0x17b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
    // 0x17b23c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17b240: 0x69430053  ldl         $v1, 0x53($t2)
    ctx->pc = 0x17b240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17b244: 0x6d43004c  ldr         $v1, 0x4C($t2)
    ctx->pc = 0x17b244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17b248: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x17b248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17b24c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x17b24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b250:
    // 0x17b250: 0x8d89ccd4  lw          $t1, -0x332C($t4)
    ctx->pc = 0x17b250u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294954196)));
    // 0x17b254: 0x25650060  addiu       $a1, $t3, 0x60
    ctx->pc = 0x17b254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x17b258: 0x8d42005c  lw          $v0, 0x5C($t2)
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x17b25c: 0x1262018  mult        $a0, $t1, $a2
    ctx->pc = 0x17b25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17b260: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17b264: 0x8b3021  addu        $a2, $a0, $t3
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x17b268: 0x1643821  addu        $a3, $t3, $a0
    ctx->pc = 0x17b268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x17b26c: 0xacc2005c  sw          $v0, 0x5C($a2)
    ctx->pc = 0x17b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 2));
    // 0x17b270: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x17b270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b274: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x17b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17b278: 0x8d420030  lw          $v0, 0x30($t2)
    ctx->pc = 0x17b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x17b27c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x17b27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b280: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x17b280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
    // 0x17b284: 0x8d430034  lw          $v1, 0x34($t2)
    ctx->pc = 0x17b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x17b288: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x17b288u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x17b28c: 0x79420060  lq          $v0, 0x60($t2)
    ctx->pc = 0x17b28cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x17b290: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x17b290u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x17b294: 0x79430070  lq          $v1, 0x70($t2)
    ctx->pc = 0x17b294u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x17b298: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x17b298u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x17b29c: 0x79420080  lq          $v0, 0x80($t2)
    ctx->pc = 0x17b29cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x17b2a0: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x17b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x17b2a4: 0x79430090  lq          $v1, 0x90($t2)
    ctx->pc = 0x17b2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x17b2a8: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x17b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x17b2ac: 0x914200b8  lbu         $v0, 0xB8($t2)
    ctx->pc = 0x17b2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 184)));
    // 0x17b2b0: 0xa0c200b8  sb          $v0, 0xB8($a2)
    ctx->pc = 0x17b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b2b4: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x17b2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b2b8: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x17b2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x17b2bc: 0xc54100b0  lwc1        $f1, 0xB0($t2)
    ctx->pc = 0x17b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b2c0: 0xe4c100b0  swc1        $f1, 0xB0($a2)
    ctx->pc = 0x17b2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 176), bits); }
    // 0x17b2c4: 0x8d4200a0  lw          $v0, 0xA0($t2)
    ctx->pc = 0x17b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 160)));
    // 0x17b2c8: 0xacc200a0  sw          $v0, 0xA0($a2)
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 2));
    // 0x17b2cc: 0x8d430038  lw          $v1, 0x38($t2)
    ctx->pc = 0x17b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x17b2d0: 0xad89ccd4  sw          $t1, -0x332C($t4)
    ctx->pc = 0x17b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294954196), GPR_U32(ctx, 9));
    // 0x17b2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2D4u;
        // 0x17b2d8: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2DCu;
    // 0x17b2dc: 0x0  nop
    ctx->pc = 0x17b2dcu;
    // NOP
    ctx->pc = 0x17b2e0u;
}
