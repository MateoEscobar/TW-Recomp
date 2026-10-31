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

// Function: sub_00497468
// Address: 0x497468 - 0x49772c
void sub_00497468_0x497468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497468_0x497468");
#endif

    switch (ctx->pc) {
        case 0x4974acu: goto label_4974ac;
        case 0x497568u: goto label_497568;
        case 0x4975ecu: goto label_4975ec;
        case 0x4975fcu: goto label_4975fc;
        case 0x49760cu: goto label_49760c;
        case 0x497628u: goto label_497628;
        case 0x497644u: goto label_497644;
        case 0x497654u: goto label_497654;
        case 0x49765cu: goto label_49765c;
        case 0x497664u: goto label_497664;
        case 0x4976c0u: goto label_4976c0;
        case 0x4976e0u: goto label_4976e0;
        default: break;
    }

    ctx->pc = 0x497468u;

    // 0x497468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49746c: 0x2c820017  sltiu       $v0, $a0, 0x17
    ctx->pc = 0x49746cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x497470: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x497470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x497474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497478: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x497478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49747c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x497480: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x497480u;
    {
        const bool branch_taken_0x497480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497480u;
        // 0x497484: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497480) {
            ctx->pc = 0x49772Cu;
            return;
        }
    }
    ctx->pc = 0x497488u;
    // 0x497488: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x497488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49748c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x49748cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x497490: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x497490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x497494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x497494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x497498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x497498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49749c: 0x800008  jr          $a0
    ctx->pc = 0x49749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4974A4u: goto label_4974a4;
            case 0x4974B4u: goto label_4974b4;
            case 0x4974BCu: goto label_4974bc;
            case 0x497558u: goto label_497558;
            case 0x497560u: goto label_497560;
            case 0x4975E4u: goto label_4975e4;
            case 0x4975F4u: goto label_4975f4;
            case 0x497604u: goto label_497604;
            case 0x49763Cu: goto label_49763c;
            case 0x49764Cu: goto label_49764c;
            case 0x497664u: goto label_497664;
            case 0x49766Cu: goto label_49766c;
            case 0x49767Cu: goto label_49767c;
            case 0x4976A0u: goto label_4976a0;
            case 0x49771Cu: goto label_49771c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49749Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4974A4u;
label_4974a4:
    // 0x4974a4: 0xc12562a  jal         func_4958A8
    ctx->pc = 0x4974A4u;
    SET_GPR_U32(ctx, 31, 0x4974ACu);
    ctx->pc = 0x4974A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4974A4u;
    // 0x4974a8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4958A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4958A8u, 0x4974A4u, 0x4974ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4974ACu;
label_4974ac:
    // 0x4974ac: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x4974ACu;
    {
        const bool branch_taken_0x4974ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4974B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4974ACu;
        // 0x4974b0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4974ac) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x4974B4u;
label_4974b4:
    // 0x4974b4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x4974B4u;
    {
        const bool branch_taken_0x4974b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4974B4u;
        // 0x4974b8: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4974b4) {
            ctx->pc = 0x497670u;
            goto label_497670;
        }
    }
    ctx->pc = 0x4974BCu;
label_4974bc:
    // 0x4974bc: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x4974bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4974c0: 0x2ca5005b  sltiu       $a1, $a1, 0x5B
    ctx->pc = 0x4974c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x4974c4: 0x10a0009a  beqz        $a1, . + 4 + (0x9A << 2)
    ctx->pc = 0x4974C4u;
    {
        const bool branch_taken_0x4974c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4974C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4974C4u;
        // 0x4974c8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4974c4) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x4974CCu;
    // 0x4974cc: 0x4e00012  bltz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x4974CCu;
    {
        const bool branch_taken_0x4974cc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4974D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4974CCu;
        // 0x4974d0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4974cc) {
            ctx->pc = 0x497518u;
            goto label_497518;
        }
    }
    ctx->pc = 0x4974D4u;
    // 0x4974d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4974d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4974d8: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x4974d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4974dc: 0x2442ec38  addiu       $v0, $v0, -0x13C8
    ctx->pc = 0x4974dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962232));
    // 0x4974e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4974e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4974e4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4974e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4974e8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4974e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4974ec: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x4974ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4974f0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x4974f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4974f4: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4974f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4974f8: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4974f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4974fc: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x4974fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497500: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x497500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497504: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x497504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497508: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x497508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49750c: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x49750cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497510: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x497510u;
    {
        const bool branch_taken_0x497510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497510u;
        // 0x497514: 0xb6060010  sdr         $a2, 0x10($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x497510) {
            ctx->pc = 0x497550u;
            goto label_497550;
        }
    }
    ctx->pc = 0x497518u;
label_497518:
    // 0x497518: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x497518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x49751c: 0x24470050  addiu       $a3, $v0, 0x50
    ctx->pc = 0x49751cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x497520: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x497520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x497524: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x497524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x497528: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x497528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x49752c: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x49752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x497530: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x497530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x497534: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x497534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x497538: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x497538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49753c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x49753cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497540: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x497540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497544: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x497544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497548: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x497548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49754c: 0xb6060010  sdr         $a2, 0x10($s0)
    ctx->pc = 0x49754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_497550:
    // 0x497550: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x497550u;
    {
        const bool branch_taken_0x497550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497550u;
        // 0x497554: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497550) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x497558u;
label_497558:
    // 0x497558: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x497558u;
    {
        const bool branch_taken_0x497558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497558u;
        // 0x49755c: 0x8f828a40  lw          $v0, -0x75C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497558) {
            ctx->pc = 0x497670u;
            goto label_497670;
        }
    }
    ctx->pc = 0x497560u;
label_497560:
    // 0x497560: 0xc126110  jal         func_498440
    ctx->pc = 0x497560u;
    SET_GPR_U32(ctx, 31, 0x497568u);
    ctx->pc = 0x498440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498440u, 0x497560u, 0x497568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497568u;
label_497568:
    // 0x497568: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x497568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x49756c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x49756cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x497570: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x497570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x497574: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x497574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x497578: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x497578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x49757c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x49757cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x497580: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x497580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x497584: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x497584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x497588: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x497588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49758c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x49758cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497590: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x497590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497594: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x497594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x497598: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x497598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49759c: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x49759cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975a0: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x4975a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975a4: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x4975a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975a8: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x4975a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4975ac: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x4975acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4975b0: 0x6844002f  ldl         $a0, 0x2F($v0)
    ctx->pc = 0x4975b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4975b4: 0x6c440028  ldr         $a0, 0x28($v0)
    ctx->pc = 0x4975b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4975b8: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x4975b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4975bc: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x4975bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4975c0: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x4975c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975c4: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x4975c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975c8: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x4975c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975cc: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x4975ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975d0: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x4975d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975d4: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x4975d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4975d8: 0xaf918a1c  sw          $s1, -0x75E4($gp)
    ctx->pc = 0x4975d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 17));
    // 0x4975dc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x4975DCu;
    {
        const bool branch_taken_0x4975dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4975E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4975DCu;
        // 0x4975e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4975dc) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x4975E4u;
label_4975e4:
    // 0x4975e4: 0xc125678  jal         func_4959E0
    ctx->pc = 0x4975E4u;
    SET_GPR_U32(ctx, 31, 0x4975ECu);
    ctx->pc = 0x4959E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4959E0u, 0x4975E4u, 0x4975ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4975ECu;
label_4975ec:
    // 0x4975ec: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4975ECu;
    {
        const bool branch_taken_0x4975ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4975F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4975ECu;
        // 0x4975f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4975ec) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x4975F4u;
label_4975f4:
    // 0x4975f4: 0xc1259d6  jal         func_496758
    ctx->pc = 0x4975F4u;
    SET_GPR_U32(ctx, 31, 0x4975FCu);
    ctx->pc = 0x496758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496758u, 0x4975F4u, 0x4975FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4975FCu;
label_4975fc:
    // 0x4975fc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x4975FCu;
    {
        const bool branch_taken_0x4975fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4975FCu;
        // 0x497600: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4975fc) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x497604u;
label_497604:
    // 0x497604: 0xc123872  jal         func_48E1C8
    ctx->pc = 0x497604u;
    SET_GPR_U32(ctx, 31, 0x49760Cu);
    ctx->pc = 0x48E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E1C8u, 0x497604u, 0x49760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49760Cu;
label_49760c:
    // 0x49760c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x49760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x497610: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x497610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
    // 0x497614: 0xac4003c0  sw          $zero, 0x3C0($v0)
    ctx->pc = 0x497614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x70F9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F9D0u, _value); } while (0);
    // 0x497618: 0xac4003cc  sw          $zero, 0x3CC($v0)
    ctx->pc = 0x497618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x70F9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F9DCu, _value); } while (0);
    // 0x49761c: 0xac4003c8  sw          $zero, 0x3C8($v0)
    ctx->pc = 0x49761cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x70F9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F9D8u, _value); } while (0);
    // 0x497620: 0xc128dc0  jal         func_4A3700
    ctx->pc = 0x497620u;
    SET_GPR_U32(ctx, 31, 0x497628u);
    ctx->pc = 0x497624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497620u;
    // 0x497624: 0xac4003c4  sw          $zero, 0x3C4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 964), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3700u, 0x497620u, 0x497628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497628u;
label_497628:
    // 0x497628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x497628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49762c: 0xaf808a48  sw          $zero, -0x75B8($gp)
    ctx->pc = 0x49762cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937160), GPR_U32(ctx, 0));
    // 0x497630: 0xaf8386c8  sw          $v1, -0x7938($gp)
    ctx->pc = 0x497630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936264), GPR_U32(ctx, 3));
    // 0x497634: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x497634u;
    {
        const bool branch_taken_0x497634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497634u;
        // 0x497638: 0xaf8086c4  sw          $zero, -0x793C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497634) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x49763Cu;
label_49763c:
    // 0x49763c: 0xc125734  jal         func_495CD0
    ctx->pc = 0x49763Cu;
    SET_GPR_U32(ctx, 31, 0x497644u);
    ctx->pc = 0x495CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495CD0u, 0x49763Cu, 0x497644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497644u;
label_497644:
    // 0x497644: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x497644u;
    {
        const bool branch_taken_0x497644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497644u;
        // 0x497648: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497644) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x49764Cu;
label_49764c:
    // 0x49764c: 0xc12777c  jal         func_49DDF0
    ctx->pc = 0x49764Cu;
    SET_GPR_U32(ctx, 31, 0x497654u);
    ctx->pc = 0x49DDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDF0u, 0x49764Cu, 0x497654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497654u;
label_497654:
    // 0x497654: 0xc126114  jal         func_498450
    ctx->pc = 0x497654u;
    SET_GPR_U32(ctx, 31, 0x49765Cu);
    ctx->pc = 0x498450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498450u, 0x497654u, 0x49765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49765Cu;
label_49765c:
    // 0x49765c: 0xc128790  jal         func_4A1E40
    ctx->pc = 0x49765Cu;
    SET_GPR_U32(ctx, 31, 0x497664u);
    ctx->pc = 0x4A1E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1E40u, 0x49765Cu, 0x497664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497664u;
label_497664:
    // 0x497664: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x497664u;
    {
        const bool branch_taken_0x497664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497664u;
        // 0x497668: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497664) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x49766Cu;
label_49766c:
    // 0x49766c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x49766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_497670:
    // 0x497670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x497670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497674: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x497674u;
    {
        const bool branch_taken_0x497674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497674u;
        // 0x497678: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497674) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x49767Cu;
label_49767c:
    // 0x49767c: 0x8f848a48  lw          $a0, -0x75B8($gp)
    ctx->pc = 0x49767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x497680: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497680u;
    {
        const bool branch_taken_0x497680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x497684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497680u;
        // 0x497684: 0x8f838a54  lw          $v1, -0x75AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497680) {
            ctx->pc = 0x497698u;
            goto label_497698;
        }
    }
    ctx->pc = 0x497688u;
    // 0x497688: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x497688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x49768c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x49768cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x497690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x497694: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x497694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_497698:
    // 0x497698: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x497698u;
    {
        const bool branch_taken_0x497698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497698u;
        // 0x49769c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497698) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x4976A0u;
label_4976a0:
    // 0x4976a0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4976a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4976a4: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4976A4u;
    {
        const bool branch_taken_0x4976a4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4976A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976A4u;
        // 0x4976a8: 0x2445f538  addiu       $a1, $v0, -0xAC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976a4) {
            ctx->pc = 0x4976DCu;
            goto label_4976dc;
        }
    }
    ctx->pc = 0x4976ACu;
    // 0x4976ac: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x4976acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x4976b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4976b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4976b4: 0x24428be8  addiu       $v0, $v0, -0x7418
    ctx->pc = 0x4976b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937576));
    // 0x4976b8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4976b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4976bc: 0x0  nop
    ctx->pc = 0x4976bcu;
    // NOP
label_4976c0:
    // 0x4976c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4976c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4976c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4976c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4976c8: 0x0  nop
    ctx->pc = 0x4976c8u;
    // NOP
    // 0x4976cc: 0x0  nop
    ctx->pc = 0x4976ccu;
    // NOP
    // 0x4976d0: 0x0  nop
    ctx->pc = 0x4976d0u;
    // NOP
    // 0x4976d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4976D4u;
    {
        const bool branch_taken_0x4976d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976D4u;
        // 0x4976d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976d4) {
            ctx->pc = 0x4976C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4976c0;
        }
    }
    ctx->pc = 0x4976DCu;
label_4976dc:
    // 0x4976dc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x4976dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_4976e0:
    // 0x4976e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4976e4: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x4976e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4976e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4976E8u;
    {
        const bool branch_taken_0x4976e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4976ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976E8u;
        // 0x4976ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976e8) {
            ctx->pc = 0x497708u;
            goto label_497708;
        }
    }
    ctx->pc = 0x4976F0u;
    // 0x4976f0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4976F0u;
    {
        const bool branch_taken_0x4976f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4976F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976F0u;
        // 0x4976f4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976f0) {
            ctx->pc = 0x497704u;
            goto label_497704;
        }
    }
    ctx->pc = 0x4976F8u;
    // 0x4976f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4976f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4976fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4976fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x497700: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x497700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_497704:
    // 0x497704: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x497704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_497708:
    // 0x497708: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x497708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x49770c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x49770Cu;
    {
        const bool branch_taken_0x49770c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49770Cu;
        // 0x497710: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49770c) {
            ctx->pc = 0x4976E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4976e0;
        }
    }
    ctx->pc = 0x497714u;
    // 0x497714: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x497714u;
    {
        const bool branch_taken_0x497714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497714u;
        // 0x497718: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497714) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x49771Cu;
label_49771c:
    // 0x49771c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x497720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x497720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x497724u;
    {
        const bool branch_taken_0x497724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497724u;
        // 0x497728: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497724) {
            ctx->pc = 0x497730u;
            return;
        }
    }
    ctx->pc = 0x49772Cu;
}
