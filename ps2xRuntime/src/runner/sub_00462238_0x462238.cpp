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

// Function: sub_00462238
// Address: 0x462238 - 0x462338
void sub_00462238_0x462238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462238_0x462238");
#endif

    switch (ctx->pc) {
        case 0x462260u: goto label_462260;
        case 0x4622f0u: goto label_4622f0;
        default: break;
    }

    ctx->pc = 0x462238u;

    // 0x462238: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x462238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46223c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x462240: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x462240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x462244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x462244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462248: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x462248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46224c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x462250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x462250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x462254: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x462254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x462258: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x462258u;
    SET_GPR_U32(ctx, 31, 0x462260u);
    ctx->pc = 0x46225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462258u;
    // 0x46225c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x462258u, 0x462260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462260u;
label_462260:
    // 0x462260: 0x8f90898c  lw          $s0, -0x7674($gp)
    ctx->pc = 0x462260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x462264: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x462264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x462268: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x462268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x46226c: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x46226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x462270: 0x344202fd  ori         $v0, $v0, 0x2FD
    ctx->pc = 0x462270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)765);
    // 0x462274: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x462274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x462278: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x462278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x46227c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x46227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x462280: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x462280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x462284: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x462284u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x462288: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x462288u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x46228c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x46228cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x462290: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x462290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x462294: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x462294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x462298: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x462298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x46229c: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x46229cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4622a0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4622a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622a4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4622a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622a8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4622a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622ac: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4622acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x4622b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4622b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4622b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x4622b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4622b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4622bc: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x4622bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4622c0: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x4622c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4622c4: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x4622c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4622c8: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x4622c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4622cc: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x4622ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622d0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x4622d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622d4: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x4622d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622d8: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x4622d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4622dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x4622dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4622e0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4622e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x4622e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4622e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4622e8: 0xc12104a  jal         func_484128
    ctx->pc = 0x4622E8u;
    SET_GPR_U32(ctx, 31, 0x4622F0u);
    ctx->pc = 0x4622ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4622E8u;
    // 0x4622ec: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4622E8u, 0x4622F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4622F0u;
label_4622f0:
    // 0x4622f0: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x4622f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4622f4: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x4622f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4622f8: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x4622f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4622fc: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x4622fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x462300: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x462300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x462304: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x462304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x462308: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x462308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46230c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x46230cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x462310: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x462310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x462314: 0xaf90898c  sw          $s0, -0x7674($gp)
    ctx->pc = 0x462314u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 16));
    // 0x462318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x462318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46231c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46231cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x462320: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x462320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x462324: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x462324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x462328: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x462328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46232c: 0x3e00008  jr          $ra
    ctx->pc = 0x46232Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46232Cu;
        // 0x462330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46232Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462334u;
    // 0x462334: 0x0  nop
    ctx->pc = 0x462334u;
    // NOP
    ctx->pc = 0x462338u;
}
