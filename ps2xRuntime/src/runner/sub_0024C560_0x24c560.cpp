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

// Function: sub_0024C560
// Address: 0x24c560 - 0x24c6d8
void sub_0024C560_0x24c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C560_0x24c560");
#endif

    switch (ctx->pc) {
        case 0x24c588u: goto label_24c588;
        case 0x24c598u: goto label_24c598;
        case 0x24c5b0u: goto label_24c5b0;
        case 0x24c5c4u: goto label_24c5c4;
        case 0x24c61cu: goto label_24c61c;
        case 0x24c688u: goto label_24c688;
        case 0x24c698u: goto label_24c698;
        case 0x24c6b8u: goto label_24c6b8;
        default: break;
    }

    ctx->pc = 0x24c560u;

    // 0x24c560: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x24c564: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x24c564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x24c568: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x24c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x24c56c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c570: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x24c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x24c574: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x24c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x24c578: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x24c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x24c57c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24c580: 0xc08a102  jal         func_228408
    ctx->pc = 0x24C580u;
    SET_GPR_U32(ctx, 31, 0x24C588u);
    ctx->pc = 0x24C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C580u;
    // 0x24c584: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228408u, 0x24C580u, 0x24C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C588u;
label_24c588:
    // 0x24c588: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x24C588u;
    {
        const bool branch_taken_0x24c588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C588u;
        // 0x24c58c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c588) {
            ctx->pc = 0x24C6BCu;
            goto label_24c6bc;
        }
    }
    ctx->pc = 0x24C590u;
    // 0x24c590: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x24C590u;
    SET_GPR_U32(ctx, 31, 0x24C598u);
    ctx->pc = 0x24C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C590u;
    // 0x24c594: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24C590u, 0x24C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C598u;
label_24c598:
    // 0x24c598: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c59c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x24C59Cu;
    {
        const bool branch_taken_0x24c59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C59Cu;
        // 0x24c5a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c59c) {
            ctx->pc = 0x24C6B8u;
            goto label_24c6b8;
        }
    }
    ctx->pc = 0x24C5A4u;
    // 0x24c5a4: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x24c5a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x24c5a8: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x24C5A8u;
    SET_GPR_U32(ctx, 31, 0x24C5B0u);
    ctx->pc = 0x24C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5A8u;
    // 0x24c5ac: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24C5A8u, 0x24C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5B0u;
label_24c5b0:
    // 0x24c5b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c5b4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x24c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x24c5b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x24C5B8u;
    {
        const bool branch_taken_0x24c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5B8u;
        // 0x24c5bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5b8) {
            ctx->pc = 0x24C618u;
            goto label_24c618;
        }
    }
    ctx->pc = 0x24C5C0u;
    // 0x24c5c0: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x24c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24c5c4:
    // 0x24c5c4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x24c5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24c5c8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x24c5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24c5cc: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x24c5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24c5d0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x24c5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24c5d4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x24c5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24c5d8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x24c5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24c5dc: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x24c5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24c5e0: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x24c5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24c5e4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x24c5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c5e8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x24c5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c5ec: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x24c5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c5f0: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x24c5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c5f4: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x24c5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c5f8: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x24c5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c5fc: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x24c5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c600: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x24c600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c604: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x24c608: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24C608u;
    {
        const bool branch_taken_0x24c608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C608u;
        // 0x24c60c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c608) {
            ctx->pc = 0x24C5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c5c4;
        }
    }
    ctx->pc = 0x24C610u;
    // 0x24c610: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24C610u;
    {
        const bool branch_taken_0x24c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c610) {
            ctx->pc = 0x24C648u;
            goto label_24c648;
        }
    }
    ctx->pc = 0x24C618u;
label_24c618:
    // 0x24c618: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x24c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24c61c:
    // 0x24c61c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x24c61cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c620: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x24c620u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24c624: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x24c624u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24c628: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x24c628u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x24c62c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x24c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x24c630: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x24c630u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x24c634: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x24c634u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x24c638: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x24c638u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x24c63c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x24c640: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24C640u;
    {
        const bool branch_taken_0x24c640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C640u;
        // 0x24c644: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c640) {
            ctx->pc = 0x24C61Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c61c;
        }
    }
    ctx->pc = 0x24C648u;
label_24c648:
    // 0x24c648: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x24c648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24c64c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x24c64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24c650: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x24c650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24c654: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x24c654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24c658: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x24c658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c65c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x24c65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c660: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x24c660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c664: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x24c664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24c668: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c66c: 0x83b00065  lb          $s0, 0x65($sp)
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 101)));
    // 0x24c670: 0x83b30087  lb          $s3, 0x87($sp)
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 135)));
    // 0x24c674: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C674u;
    {
        const bool branch_taken_0x24c674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C674u;
        // 0x24c678: 0x83b20086  lb          $s2, 0x86($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c674) {
            ctx->pc = 0x24C690u;
            goto label_24c690;
        }
    }
    ctx->pc = 0x24C67Cu;
    // 0x24c67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c680: 0xc0932ec  jal         func_24CBB0
    ctx->pc = 0x24C680u;
    SET_GPR_U32(ctx, 31, 0x24C688u);
    ctx->pc = 0x24C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C680u;
    // 0x24c684: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CBB0u, 0x24C680u, 0x24C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C688u;
label_24c688:
    // 0x24c688: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24C688u;
    {
        const bool branch_taken_0x24c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C688u;
        // 0x24c68c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c688) {
            ctx->pc = 0x24C6BCu;
            goto label_24c6bc;
        }
    }
    ctx->pc = 0x24C690u;
label_24c690:
    // 0x24c690: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x24C690u;
    SET_GPR_U32(ctx, 31, 0x24C698u);
    ctx->pc = 0x24C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C690u;
    // 0x24c694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x24C690u, 0x24C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C698u;
label_24c698:
    // 0x24c698: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C698u;
    {
        const bool branch_taken_0x24c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c698) {
            ctx->pc = 0x24C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C698u;
            // 0x24c69c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6BCu;
            goto label_24c6bc;
        }
    }
    ctx->pc = 0x24C6A0u;
    // 0x24c6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24c6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24c6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24c6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6b0: 0xc0931b6  jal         func_24C6D8
    ctx->pc = 0x24C6B0u;
    SET_GPR_U32(ctx, 31, 0x24C6B8u);
    ctx->pc = 0x24C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C6B0u;
    // 0x24c6b4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C6D8u, 0x24C6B0u, 0x24C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6B8u;
label_24c6b8:
    // 0x24c6b8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x24c6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_24c6bc:
    // 0x24c6bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x24c6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24c6c0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x24c6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24c6c4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x24c6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24c6c8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x24c6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24c6cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24c6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24c6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6D0u;
        // 0x24c6d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C6D8u;
}
