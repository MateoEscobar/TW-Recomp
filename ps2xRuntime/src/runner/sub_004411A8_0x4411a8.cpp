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

// Function: sub_004411A8
// Address: 0x4411a8 - 0x441560
void sub_004411A8_0x4411a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004411A8_0x4411a8");
#endif

    switch (ctx->pc) {
        case 0x441244u: goto label_441244;
        case 0x441298u: goto label_441298;
        case 0x4412e8u: goto label_4412e8;
        case 0x441350u: goto label_441350;
        case 0x4413acu: goto label_4413ac;
        case 0x4414d8u: goto label_4414d8;
        case 0x441514u: goto label_441514;
        case 0x44154cu: goto label_44154c;
        default: break;
    }

    ctx->pc = 0x4411a8u;

    // 0x4411a8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4411ac: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4411acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4411b0: 0x8c438ef0  lw          $v1, -0x7110($v0)
    ctx->pc = 0x4411b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x518EF0u));
    // 0x4411b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4411b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4411b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4411b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4411bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4411BCu;
    {
        const bool branch_taken_0x4411bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4411C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4411BCu;
        // 0x4411c0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4411bc) {
            ctx->pc = 0x4411C8u;
            goto label_4411c8;
        }
    }
    ctx->pc = 0x4411C4u;
    // 0x4411c4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x4411c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4411c8:
    // 0x4411c8: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x4411c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x4411cc: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4411d0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x4411d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4411d4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4411d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4411d8: 0xac458ee8  sw          $a1, -0x7118($v0)
    ctx->pc = 0x4411d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938344), GPR_U32(ctx, 5));
    // 0x4411dc: 0x24842b80  addiu       $a0, $a0, 0x2B80
    ctx->pc = 0x4411dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11136));
    // 0x4411e0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x4411e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x4411e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4411e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4411e8: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x4411e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4411ec: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x4411ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x4411f0: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x4411f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x4411f4: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x4411f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4411f8: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x4411f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4411fc: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x4411fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x441200: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x441200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x441204: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x441204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441208: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x441208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44120c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x44120cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x441210: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x441210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x441214: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x441214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441218: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x441218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44121c: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x44121cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x441220: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x441220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x441224: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x441224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441228: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x441228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44122c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x441230: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x441230u;
    {
        const bool branch_taken_0x441230 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x441234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441230u;
        // 0x441234: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441230) {
            ctx->pc = 0x441244u;
            goto label_441244;
        }
    }
    ctx->pc = 0x441238u;
    // 0x441238: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x441238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x44123c: 0xc10c190  jal         func_430640
    ctx->pc = 0x44123Cu;
    SET_GPR_U32(ctx, 31, 0x441244u);
    ctx->pc = 0x441240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44123Cu;
    // 0x441240: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x44123Cu, 0x441244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441244u;
label_441244:
    // 0x441244: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x441244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x441248: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x441248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x44124c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x44124cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x441250: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x441250u;
    {
        const bool branch_taken_0x441250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x441254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441250u;
        // 0x441254: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441250) {
            ctx->pc = 0x4414D8u;
            goto label_4414d8;
        }
    }
    ctx->pc = 0x441258u;
    // 0x441258: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x441258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x44125c: 0x2442db00  addiu       $v0, $v0, -0x2500
    ctx->pc = 0x44125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x441260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x441260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x441264: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x441264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x441268: 0x800008  jr          $a0
    ctx->pc = 0x441268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x441270u: goto label_441270;
            case 0x441318u: goto label_441318;
            case 0x4413F4u: goto label_4413f4;
            case 0x441490u: goto label_441490;
            case 0x4414D8u: goto label_4414d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441268u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x441270u;
label_441270:
    // 0x441270: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x441270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x441274: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x441274u;
    {
        const bool branch_taken_0x441274 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x441278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441274u;
        // 0x441278: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441274) {
            ctx->pc = 0x4412C0u;
            goto label_4412c0;
        }
    }
    ctx->pc = 0x44127Cu;
    // 0x44127c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x44127cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x441280: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x441280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x441284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x441284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441288: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x441288u;
    {
        const bool branch_taken_0x441288 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x44128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441288u;
        // 0x44128c: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441288) {
            ctx->pc = 0x4412C0u;
            goto label_4412c0;
        }
    }
    ctx->pc = 0x441290u;
    // 0x441290: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x441290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x441294: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x441294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_441298:
    // 0x441298: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x441298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x44129c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x44129cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4412a0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x4412a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4412a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4412a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4412a8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4412a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4412ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4412acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4412b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4412b4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x4412b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4412b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4412B8u;
    {
        const bool branch_taken_0x4412b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4412BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4412B8u;
        // 0x4412bc: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412b8) {
            ctx->pc = 0x441298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441298;
        }
    }
    ctx->pc = 0x4412C0u;
label_4412c0:
    // 0x4412c0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4412c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4412c4: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x4412C4u;
    {
        const bool branch_taken_0x4412c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4412C4u;
        // 0x4412c8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412c4) {
            ctx->pc = 0x4414D8u;
            goto label_4414d8;
        }
    }
    ctx->pc = 0x4412CCu;
    // 0x4412cc: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x4412ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4412d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4412d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4412d4: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x4412D4u;
    {
        const bool branch_taken_0x4412d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4412D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4412D4u;
        // 0x4412d8: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412d4) {
            ctx->pc = 0x4414D8u;
            goto label_4414d8;
        }
    }
    ctx->pc = 0x4412DCu;
    // 0x4412dc: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x4412dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x4412e0: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x4412e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4412e4: 0x0  nop
    ctx->pc = 0x4412e4u;
    // NOP
label_4412e8:
    // 0x4412e8: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x4412e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4412ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4412ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4412f0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x4412f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4412f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4412f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4412f8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4412f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4412fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4412fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x441300: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x441300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x441304: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x441304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x441308: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x441308u;
    {
        const bool branch_taken_0x441308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441308u;
        // 0x44130c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441308) {
            ctx->pc = 0x4412E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4412e8;
        }
    }
    ctx->pc = 0x441310u;
    // 0x441310: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x441310u;
    {
        const bool branch_taken_0x441310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441310u;
        // 0x441314: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441310) {
            ctx->pc = 0x4414DCu;
            goto label_4414dc;
        }
    }
    ctx->pc = 0x441318u;
label_441318:
    // 0x441318: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x441318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x44131c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x441320: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x441320u;
    {
        const bool branch_taken_0x441320 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x441324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441320u;
        // 0x441324: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441320) {
            ctx->pc = 0x4414DCu;
            goto label_4414dc;
        }
    }
    ctx->pc = 0x441328u;
    // 0x441328: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x441328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x44132c: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x44132cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x441330: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x441330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441334: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x441334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441338: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x441338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x44133c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x44133cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x441340: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x441340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x441344: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x441344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x441348: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x441348u;
    {
        const bool branch_taken_0x441348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441348u;
        // 0x44134c: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441348) {
            ctx->pc = 0x4413ACu;
            goto label_4413ac;
        }
    }
    ctx->pc = 0x441350u;
label_441350:
    // 0x441350: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x441350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x441354: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x441354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x441358: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x441358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x44135c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x44135cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x441360: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x441360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x441364: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x441364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x441368: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x441368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x44136c: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x44136cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x441370: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x441370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441374: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x441374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441378: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x441378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44137c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x44137cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441380: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x441380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441384: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x441384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441388: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x441388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44138c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x44138cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441390: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x441390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x441394: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x441394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x441398: 0x0  nop
    ctx->pc = 0x441398u;
    // NOP
    // 0x44139c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44139Cu;
    {
        const bool branch_taken_0x44139c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x44139c) {
            ctx->pc = 0x441350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441350;
        }
    }
    ctx->pc = 0x4413A4u;
    // 0x4413a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4413A4u;
    {
        const bool branch_taken_0x4413a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4413a4) {
            ctx->pc = 0x4413E0u;
            goto label_4413e0;
        }
    }
    ctx->pc = 0x4413ACu;
label_4413ac:
    // 0x4413ac: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x4413acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4413b0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x4413b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4413b4: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x4413b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4413b8: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x4413b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4413bc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x4413bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x4413c0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x4413c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x4413c4: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x4413c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x4413c8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x4413c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x4413cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4413ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4413d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x4413d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x4413d4: 0x0  nop
    ctx->pc = 0x4413d4u;
    // NOP
    // 0x4413d8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4413D8u;
    {
        const bool branch_taken_0x4413d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4413d8) {
            ctx->pc = 0x4413ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4413ac;
        }
    }
    ctx->pc = 0x4413E0u;
label_4413e0:
    // 0x4413e0: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x4413e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x4413e4: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x4413e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x4413e8: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x4413e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4413ec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4413ECu;
    {
        const bool branch_taken_0x4413ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4413F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4413ECu;
        // 0x4413f0: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4413ec) {
            ctx->pc = 0x4414D8u;
            goto label_4414d8;
        }
    }
    ctx->pc = 0x4413F4u;
label_4413f4:
    // 0x4413f4: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x4413f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x4413f8: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x4413f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x4413fc: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x4413fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441400: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x441400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x441404: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x441404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x441408: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x441408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x44140c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x44140cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x441410: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x441410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x441414: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x441414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x441418: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x441418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x44141c: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x44141cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x441420: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x441420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x441424: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x441424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x441428: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x441428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44142c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x44142cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441430: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x441430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441434: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x441434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441438: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x441438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44143c: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x44143cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441440: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x441440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441444: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x441444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441448: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x441448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x44144c: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x44144cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x441450: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x441450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x441454: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x441454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x441458: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x441458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x44145c: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x44145cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x441460: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x441460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x441464: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x441464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x441468: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x441468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44146c: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x44146cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441470: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x441470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441474: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x441474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441478: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x441478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44147c: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x44147cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441480: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x441480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441484: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x441484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x441488: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x441488u;
    {
        const bool branch_taken_0x441488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441488u;
        // 0x44148c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441488) {
            ctx->pc = 0x4414DCu;
            goto label_4414dc;
        }
    }
    ctx->pc = 0x441490u;
label_441490:
    // 0x441490: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x441490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x441494: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x441494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x441498: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x441498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44149c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x44149cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4414a0: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x4414a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x4414a4: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x4414a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x4414a8: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x4414a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4414ac: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x4414acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4414b0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x4414b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4414b4: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x4414b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x4414b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4414B8u;
    {
        const bool branch_taken_0x4414b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4414BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4414B8u;
        // 0x4414bc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4414b8) {
            ctx->pc = 0x4414D0u;
            goto label_4414d0;
        }
    }
    ctx->pc = 0x4414C0u;
    // 0x4414c0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x4414c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4414c4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x4414c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4414c8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4414c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4414cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4414ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4414d0:
    // 0x4414d0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4414D0u;
    SET_GPR_U32(ctx, 31, 0x4414D8u);
    ctx->pc = 0x4414D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4414D0u;
    // 0x4414d4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4414D0u, 0x4414D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4414D8u;
label_4414d8:
    // 0x4414d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4414d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4414dc:
    // 0x4414dc: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4414DCu;
    {
        const bool branch_taken_0x4414dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4414E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4414DCu;
        // 0x4414e0: 0x3c070052  lui         $a3, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4414dc) {
            ctx->pc = 0x441544u;
            goto label_441544;
        }
    }
    ctx->pc = 0x4414E4u;
    // 0x4414e4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4414e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4414e8: 0x8ce38e68  lw          $v1, -0x7198($a3)
    ctx->pc = 0x4414e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294938216)));
    // 0x4414ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4414ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4414f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4414f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4414f4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4414F4u;
    {
        const bool branch_taken_0x4414f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4414F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4414F4u;
        // 0x4414f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4414f4) {
            ctx->pc = 0x441510u;
            goto label_441510;
        }
    }
    ctx->pc = 0x4414FCu;
    // 0x4414fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4414fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x441500: 0xace28e68  sw          $v0, -0x7198($a3)
    ctx->pc = 0x441500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294938216), GPR_U32(ctx, 2));
    // 0x441504: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x441504u;
    {
        const bool branch_taken_0x441504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441504u;
        // 0x441508: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441504) {
            ctx->pc = 0x441550u;
            goto label_441550;
        }
    }
    ctx->pc = 0x44150Cu;
    // 0x44150c: 0x0  nop
    ctx->pc = 0x44150cu;
    // NOP
label_441510:
    // 0x441510: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x441510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_441514:
    // 0x441514: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x441514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x441518: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x441518u;
    {
        const bool branch_taken_0x441518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441518u;
        // 0x44151c: 0x24e28e68  addiu       $v0, $a3, -0x7198 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441518) {
            ctx->pc = 0x44154Cu;
            goto label_44154c;
        }
    }
    ctx->pc = 0x441520u;
    // 0x441520: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x441520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x441524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x441524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x441528: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x441528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44152c: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x44152Cu;
    {
        const bool branch_taken_0x44152c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x441530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44152Cu;
        // 0x441530: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44152c) {
            ctx->pc = 0x441514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441514;
        }
    }
    ctx->pc = 0x441534u;
    // 0x441534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x441534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x441538: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x441538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x44153c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44153Cu;
    {
        const bool branch_taken_0x44153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44153Cu;
        // 0x441540: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44153c) {
            ctx->pc = 0x441550u;
            goto label_441550;
        }
    }
    ctx->pc = 0x441544u;
label_441544:
    // 0x441544: 0xc10f434  jal         func_43D0D0
    ctx->pc = 0x441544u;
    SET_GPR_U32(ctx, 31, 0x44154Cu);
    ctx->pc = 0x43D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0D0u, 0x441544u, 0x44154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44154Cu;
label_44154c:
    // 0x44154c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_441550:
    // 0x441550: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x441550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x441554: 0x3e00008  jr          $ra
    ctx->pc = 0x441554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441554u;
        // 0x441558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44155Cu;
    // 0x44155c: 0x0  nop
    ctx->pc = 0x44155cu;
    // NOP
    ctx->pc = 0x441560u;
}
