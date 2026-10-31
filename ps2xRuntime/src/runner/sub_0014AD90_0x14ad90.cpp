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

// Function: sub_0014AD90
// Address: 0x14ad90 - 0x14b158
void sub_0014AD90_0x14ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD90_0x14ad90");
#endif

    switch (ctx->pc) {
        case 0x14af60u: goto label_14af60;
        case 0x14b030u: goto label_14b030;
        case 0x14b044u: goto label_14b044;
        case 0x14b050u: goto label_14b050;
        case 0x14b05cu: goto label_14b05c;
        case 0x14b090u: goto label_14b090;
        case 0x14b0e8u: goto label_14b0e8;
        default: break;
    }

    ctx->pc = 0x14ad90u;

    // 0x14ad90: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x14ad94: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x14ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x14ad98: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x14ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x14ad9c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x14ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x14ada0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x14ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x14ada4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x14ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x14ada8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14ada8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adac: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x14adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x14adb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14adb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adb4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x14adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x14adb8: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x14adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x14adbc: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x14adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x14adc0: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x14adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x14adc4: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x14adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x14adc8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x14adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x14adcc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x14adccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14add0: 0x244ab2c8  addiu       $t2, $v0, -0x4D38
    ctx->pc = 0x14add0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947528));
    // 0x14add4: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x14add4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14add8: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x14add8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14addc: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x14addcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14ade0: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x14ade0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14ade4: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x14ade4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x14ade8: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x14ade8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x14adec: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x14adecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14adf0: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x14adf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14adf4: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x14adf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14adf8: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x14adf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14adfc: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x14adfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae00: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x14ae00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae04: 0x6947001f  ldl         $a3, 0x1F($t2)
    ctx->pc = 0x14ae04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14ae08: 0x6d470018  ldr         $a3, 0x18($t2)
    ctx->pc = 0x14ae08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14ae0c: 0x69480027  ldl         $t0, 0x27($t2)
    ctx->pc = 0x14ae0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14ae10: 0x6d480020  ldr         $t0, 0x20($t2)
    ctx->pc = 0x14ae10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14ae14: 0x6949002f  ldl         $t1, 0x2F($t2)
    ctx->pc = 0x14ae14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x14ae18: 0x6d490028  ldr         $t1, 0x28($t2)
    ctx->pc = 0x14ae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x14ae1c: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x14ae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae20: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x14ae20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae24: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x14ae24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae28: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x14ae28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae2c: 0xb3a9004f  sdl         $t1, 0x4F($sp)
    ctx->pc = 0x14ae2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae30: 0xb7a90048  sdr         $t1, 0x48($sp)
    ctx->pc = 0x14ae30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae34: 0x69470037  ldl         $a3, 0x37($t2)
    ctx->pc = 0x14ae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14ae38: 0x6d470030  ldr         $a3, 0x30($t2)
    ctx->pc = 0x14ae38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14ae3c: 0x6948003f  ldl         $t0, 0x3F($t2)
    ctx->pc = 0x14ae3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14ae40: 0x6d480038  ldr         $t0, 0x38($t2)
    ctx->pc = 0x14ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14ae44: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x14ae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae48: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x14ae48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae4c: 0xb3a8005f  sdl         $t0, 0x5F($sp)
    ctx->pc = 0x14ae4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae50: 0xb7a80058  sdr         $t0, 0x58($sp)
    ctx->pc = 0x14ae50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae54: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x14ae54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x14ae58: 0x246ab308  addiu       $t2, $v1, -0x4CF8
    ctx->pc = 0x14ae58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947592));
    // 0x14ae5c: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x14ae5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14ae60: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x14ae60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14ae64: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x14ae64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14ae68: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x14ae68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14ae6c: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x14ae6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x14ae70: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x14ae70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x14ae74: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x14ae74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae78: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x14ae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae7c: 0xb3a8006f  sdl         $t0, 0x6F($sp)
    ctx->pc = 0x14ae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae80: 0xb7a80068  sdr         $t0, 0x68($sp)
    ctx->pc = 0x14ae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae84: 0xb3a90077  sdl         $t1, 0x77($sp)
    ctx->pc = 0x14ae84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae88: 0xb7a90070  sdr         $t1, 0x70($sp)
    ctx->pc = 0x14ae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ae8c: 0x6942001f  ldl         $v0, 0x1F($t2)
    ctx->pc = 0x14ae8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14ae90: 0x6d420018  ldr         $v0, 0x18($t2)
    ctx->pc = 0x14ae90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14ae94: 0x69480027  ldl         $t0, 0x27($t2)
    ctx->pc = 0x14ae94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14ae98: 0x6d480020  ldr         $t0, 0x20($t2)
    ctx->pc = 0x14ae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14ae9c: 0x6949002f  ldl         $t1, 0x2F($t2)
    ctx->pc = 0x14ae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x14aea0: 0x6d490028  ldr         $t1, 0x28($t2)
    ctx->pc = 0x14aea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x14aea4: 0xb3a2007f  sdl         $v0, 0x7F($sp)
    ctx->pc = 0x14aea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aea8: 0xb7a20078  sdr         $v0, 0x78($sp)
    ctx->pc = 0x14aea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aeac: 0xb3a80087  sdl         $t0, 0x87($sp)
    ctx->pc = 0x14aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aeb0: 0xb7a80080  sdr         $t0, 0x80($sp)
    ctx->pc = 0x14aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aeb4: 0xb3a9008f  sdl         $t1, 0x8F($sp)
    ctx->pc = 0x14aeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aeb8: 0xb7a90088  sdr         $t1, 0x88($sp)
    ctx->pc = 0x14aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aebc: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x14aebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
    // 0x14aec0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14aec4: 0x24e8b338  addiu       $t0, $a3, -0x4CC8
    ctx->pc = 0x14aec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947640));
    // 0x14aec8: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x14aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14aecc: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x14aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14aed0: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x14aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14aed4: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x14aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14aed8: 0x69050017  ldl         $a1, 0x17($t0)
    ctx->pc = 0x14aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14aedc: 0x6d050010  ldr         $a1, 0x10($t0)
    ctx->pc = 0x14aedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14aee0: 0xb3a30097  sdl         $v1, 0x97($sp)
    ctx->pc = 0x14aee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aee4: 0xb7a30090  sdr         $v1, 0x90($sp)
    ctx->pc = 0x14aee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aee8: 0xb3a4009f  sdl         $a0, 0x9F($sp)
    ctx->pc = 0x14aee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aeec: 0xb7a40098  sdr         $a0, 0x98($sp)
    ctx->pc = 0x14aeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aef0: 0xb3a500a7  sdl         $a1, 0xA7($sp)
    ctx->pc = 0x14aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aef4: 0xb7a500a0  sdr         $a1, 0xA0($sp)
    ctx->pc = 0x14aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14aef8: 0x6903001f  ldl         $v1, 0x1F($t0)
    ctx->pc = 0x14aef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14aefc: 0x6d030018  ldr         $v1, 0x18($t0)
    ctx->pc = 0x14aefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14af00: 0x69040027  ldl         $a0, 0x27($t0)
    ctx->pc = 0x14af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14af04: 0x6d040020  ldr         $a0, 0x20($t0)
    ctx->pc = 0x14af04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14af08: 0x6905002f  ldl         $a1, 0x2F($t0)
    ctx->pc = 0x14af08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14af0c: 0x6d050028  ldr         $a1, 0x28($t0)
    ctx->pc = 0x14af0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14af10: 0xb3a300af  sdl         $v1, 0xAF($sp)
    ctx->pc = 0x14af10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af14: 0xb7a300a8  sdr         $v1, 0xA8($sp)
    ctx->pc = 0x14af14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af18: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x14af18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af1c: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x14af1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af20: 0xb3a500bf  sdl         $a1, 0xBF($sp)
    ctx->pc = 0x14af20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af24: 0xb7a500b8  sdr         $a1, 0xB8($sp)
    ctx->pc = 0x14af24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af28: 0x2450edc8  addiu       $s0, $v0, -0x1238
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962632));
    // 0x14af2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14af2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af30: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x14af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x14af34: 0x2447b368  addiu       $a3, $v0, -0x4C98
    ctx->pc = 0x14af34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947688));
    // 0x14af38: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x14af38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x14af3c: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x14af3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x14af40: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x14af40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x14af44: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x14af44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x14af48: 0xb3a900c7  sdl         $t1, 0xC7($sp)
    ctx->pc = 0x14af48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af4c: 0xb7a900c0  sdr         $t1, 0xC0($sp)
    ctx->pc = 0x14af4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af50: 0xb3aa00cf  sdl         $t2, 0xCF($sp)
    ctx->pc = 0x14af50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af54: 0xb7aa00c8  sdr         $t2, 0xC8($sp)
    ctx->pc = 0x14af54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14af58: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x14AF58u;
    SET_GPR_U32(ctx, 31, 0x14AF60u);
    ctx->pc = 0x14AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF58u;
    // 0x14af5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x14AF58u, 0x14AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF60u;
label_14af60:
    // 0x14af60: 0xdfa70058  ld          $a3, 0x58($sp)
    ctx->pc = 0x14af60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x14af64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14af64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af68: 0xdfa300b8  ld          $v1, 0xB8($sp)
    ctx->pc = 0x14af68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14af6c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x14af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14af70: 0xdfa80060  ld          $t0, 0x60($sp)
    ctx->pc = 0x14af70u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14af74: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x14af74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x14af78: 0xdfb90020  ld          $t9, 0x20($sp)
    ctx->pc = 0x14af78u;
    SET_GPR_U64(ctx, 25, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14af7c: 0x26090050  addiu       $t1, $s0, 0x50
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14af80: 0xdfb80028  ld          $t8, 0x28($sp)
    ctx->pc = 0x14af80u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af84: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x14af84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x14af88: 0xdfb70030  ld          $s7, 0x30($sp)
    ctx->pc = 0x14af88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14af8c: 0xdfb60038  ld          $s6, 0x38($sp)
    ctx->pc = 0x14af8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14af90: 0xdfb50040  ld          $s5, 0x40($sp)
    ctx->pc = 0x14af90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14af94: 0xdfb40048  ld          $s4, 0x48($sp)
    ctx->pc = 0x14af94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14af98: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x14af98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14af9c: 0xdfac0090  ld          $t4, 0x90($sp)
    ctx->pc = 0x14af9cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14afa0: 0xdfad0098  ld          $t5, 0x98($sp)
    ctx->pc = 0x14afa0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14afa4: 0xdfae00a0  ld          $t6, 0xA0($sp)
    ctx->pc = 0x14afa4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14afa8: 0xdfaf00a8  ld          $t7, 0xA8($sp)
    ctx->pc = 0x14afa8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14afac: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x14afacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14afb0: 0xdfaa0068  ld          $t2, 0x68($sp)
    ctx->pc = 0x14afb0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14afb4: 0xdfab0070  ld          $t3, 0x70($sp)
    ctx->pc = 0x14afb4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14afb8: 0xfc470038  sd          $a3, 0x38($v0)
    ctx->pc = 0x14afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x14afbc: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x14afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x14afc0: 0xfe190010  sd          $t9, 0x10($s0)
    ctx->pc = 0x14afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 25));
    // 0x14afc4: 0xfc580008  sd          $t8, 0x8($v0)
    ctx->pc = 0x14afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 24));
    // 0x14afc8: 0xfc570010  sd          $s7, 0x10($v0)
    ctx->pc = 0x14afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 23));
    // 0x14afcc: 0xfc560018  sd          $s6, 0x18($v0)
    ctx->pc = 0x14afccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 22));
    // 0x14afd0: 0xfc550020  sd          $s5, 0x20($v0)
    ctx->pc = 0x14afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 21));
    // 0x14afd4: 0xfc540028  sd          $s4, 0x28($v0)
    ctx->pc = 0x14afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 20));
    // 0x14afd8: 0xfc530030  sd          $s3, 0x30($v0)
    ctx->pc = 0x14afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 19));
    // 0x14afdc: 0xfe0c0080  sd          $t4, 0x80($s0)
    ctx->pc = 0x14afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 12));
    // 0x14afe0: 0xfccd0008  sd          $t5, 0x8($a2)
    ctx->pc = 0x14afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 13));
    // 0x14afe4: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x14afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x14afe8: 0xfccf0018  sd          $t7, 0x18($a2)
    ctx->pc = 0x14afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 15));
    // 0x14afec: 0xfcd20020  sd          $s2, 0x20($a2)
    ctx->pc = 0x14afecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 18));
    // 0x14aff0: 0xfe080050  sd          $t0, 0x50($s0)
    ctx->pc = 0x14aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 8));
    // 0x14aff4: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x14aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x14aff8: 0xfd2b0010  sd          $t3, 0x10($t1)
    ctx->pc = 0x14aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 11));
    // 0x14affc: 0xdfa80080  ld          $t0, 0x80($sp)
    ctx->pc = 0x14affcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b000: 0xdfa300c0  ld          $v1, 0xC0($sp)
    ctx->pc = 0x14b000u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14b004: 0xdfa600c8  ld          $a2, 0xC8($sp)
    ctx->pc = 0x14b004u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14b008: 0xdfa70078  ld          $a3, 0x78($sp)
    ctx->pc = 0x14b008u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x14b00c: 0xdfa20088  ld          $v0, 0x88($sp)
    ctx->pc = 0x14b00cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x14b010: 0xfd280020  sd          $t0, 0x20($t1)
    ctx->pc = 0x14b010u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 8));
    // 0x14b014: 0xfd220028  sd          $v0, 0x28($t1)
    ctx->pc = 0x14b014u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 40), GPR_U64(ctx, 2));
    // 0x14b018: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x14b018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14b01c: 0xfd270018  sd          $a3, 0x18($t1)
    ctx->pc = 0x14b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 7));
    // 0x14b020: 0xfe0600b8  sd          $a2, 0xB8($s0)
    ctx->pc = 0x14b020u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 184), GPR_U64(ctx, 6));
    // 0x14b024: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x14b024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x14b028: 0xc052b14  jal         func_14AC50
    ctx->pc = 0x14B028u;
    SET_GPR_U32(ctx, 31, 0x14B030u);
    ctx->pc = 0x14B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B028u;
    // 0x14b02c: 0xfe0300b0  sd          $v1, 0xB0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC50u, 0x14B028u, 0x14B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B030u;
label_14b030:
    // 0x14b030: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b034: 0x26040104  addiu       $a0, $s0, 0x104
    ctx->pc = 0x14b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x14b038: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x14b038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b03c: 0xc10c366  jal         func_430D98
    ctx->pc = 0x14B03Cu;
    SET_GPR_U32(ctx, 31, 0x14B044u);
    ctx->pc = 0x14B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B03Cu;
    // 0x14b040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x14B03Cu, 0x14B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B044u;
label_14b044:
    // 0x14b044: 0x26040144  addiu       $a0, $s0, 0x144
    ctx->pc = 0x14b044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    // 0x14b048: 0xc10c366  jal         func_430D98
    ctx->pc = 0x14B048u;
    SET_GPR_U32(ctx, 31, 0x14B050u);
    ctx->pc = 0x14B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B048u;
    // 0x14b04c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x14B048u, 0x14B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B050u;
label_14b050:
    // 0x14b050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b054: 0xc10c366  jal         func_430D98
    ctx->pc = 0x14B054u;
    SET_GPR_U32(ctx, 31, 0x14B05Cu);
    ctx->pc = 0x14B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B054u;
    // 0x14b058: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x14B054u, 0x14B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B05Cu;
label_14b05c:
    // 0x14b05c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x14b060: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x14b060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b064: 0x2462b378  addiu       $v0, $v1, -0x4C88
    ctx->pc = 0x14b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947704));
    // 0x14b068: 0x8c64b378  lw          $a0, -0x4C88($v1)
    ctx->pc = 0x14b068u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x54B378u));
    // 0x14b06c: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x14b06cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x54B37Cu));
    // 0x14b070: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x14b070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b074: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x14b074u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x14b078: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x14b078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x14b07c: 0xad24edc8  sw          $a0, -0x1238($t1)
    ctx->pc = 0x14b07cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5DEDC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DEDC8u, _value); } while (0);
    // 0x14b080: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x14b080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x14b084: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14B084u;
    {
        const bool branch_taken_0x14b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B084u;
        // 0x14b088: 0xa2050004  sb          $a1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b084) {
            ctx->pc = 0x14B0E4u;
            goto label_14b0e4;
        }
    }
    ctx->pc = 0x14B08Cu;
    // 0x14b08c: 0x246203c0  addiu       $v0, $v1, 0x3C0
    ctx->pc = 0x14b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
label_14b090:
    // 0x14b090: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x14b090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x14b094: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x14b094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x14b098: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x14b098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14b09c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x14b09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14b0a0: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x14b0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14b0a4: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x14b0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14b0a8: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x14b0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14b0ac: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x14b0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14b0b0: 0xb0ca0007  sdl         $t2, 0x7($a2)
    ctx->pc = 0x14b0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0b4: 0xb4ca0000  sdr         $t2, 0x0($a2)
    ctx->pc = 0x14b0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0b8: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x14b0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0bc: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x14b0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0c0: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x14b0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0c4: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x14b0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0c8: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x14b0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0cc: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x14b0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b0d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x14b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14b0d4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14B0D4u;
    {
        const bool branch_taken_0x14b0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0D4u;
        // 0x14b0d8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0d4) {
            ctx->pc = 0x14B090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b090;
        }
    }
    ctx->pc = 0x14B0DCu;
    // 0x14b0dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14B0DCu;
    {
        const bool branch_taken_0x14b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b0dc) {
            ctx->pc = 0x14B114u;
            goto label_14b114;
        }
    }
    ctx->pc = 0x14B0E4u;
label_14b0e4:
    // 0x14b0e4: 0x246203c0  addiu       $v0, $v1, 0x3C0
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
label_14b0e8:
    // 0x14b0e8: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x14b0e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b0ec: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x14b0ecu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14b0f0: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x14b0f0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14b0f4: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x14b0f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14b0f8: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x14b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x14b0fc: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x14b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x14b100: 0xfcca0010  sd          $t2, 0x10($a2)
    ctx->pc = 0x14b100u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 10));
    // 0x14b104: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x14b104u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x14b108: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x14b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14b10c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14B10Cu;
    {
        const bool branch_taken_0x14b10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B10Cu;
        // 0x14b110: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b10c) {
            ctx->pc = 0x14B0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b0e8;
        }
    }
    ctx->pc = 0x14B114u;
label_14b114:
    // 0x14b114: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x14b114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x14b118: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x14b118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x14b11c: 0xa8c50003  swl         $a1, 0x3($a2)
    ctx->pc = 0x14b11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14b120: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x14b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x14b124: 0xb8c50000  swr         $a1, 0x0($a2)
    ctx->pc = 0x14b124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x14b128: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x14b128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14b12c: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x14b12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14b130: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x14b130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14b134: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x14b134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14b138: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x14b138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14b13c: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x14b13cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14b140: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x14b140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14b144: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x14b144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14b148: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x14b148u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14b14c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x14b14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14b150: 0x3e00008  jr          $ra
    ctx->pc = 0x14B150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B150u;
        // 0x14b154: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B158u;
}
