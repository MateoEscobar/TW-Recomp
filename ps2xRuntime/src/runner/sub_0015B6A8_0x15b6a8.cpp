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

// Function: sub_0015B6A8
// Address: 0x15b6a8 - 0x15b7e0
void sub_0015B6A8_0x15b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B6A8_0x15b6a8");
#endif

    switch (ctx->pc) {
        case 0x15b6ecu: goto label_15b6ec;
        case 0x15b6f8u: goto label_15b6f8;
        case 0x15b704u: goto label_15b704;
        case 0x15b750u: goto label_15b750;
        case 0x15b760u: goto label_15b760;
        case 0x15b76cu: goto label_15b76c;
        case 0x15b778u: goto label_15b778;
        case 0x15b7c4u: goto label_15b7c4;
        default: break;
    }

    ctx->pc = 0x15b6a8u;

    // 0x15b6a8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x15b6ac: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b6acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b6b0: 0x8c655d80  lw          $a1, 0x5D80($v1)
    ctx->pc = 0x15b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E5D80u));
    // 0x15b6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b6b8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15b6bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15b6c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15b6c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15b6c8: 0xac82c72c  sw          $v0, -0x38D4($a0)
    ctx->pc = 0x15b6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C72Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C72Cu, _value); } while (0);
    // 0x15b6cc: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15B6CCu;
    {
        const bool branch_taken_0x15b6cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6CCu;
        // 0x15b6d0: 0xac62c728  sw          $v0, -0x38D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6cc) {
            ctx->pc = 0x15B758u;
            goto label_15b758;
        }
    }
    ctx->pc = 0x15B6D4u;
    // 0x15b6d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15b6d8: 0x8c43c6fc  lw          $v1, -0x3904($v0)
    ctx->pc = 0x15b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C6FCu));
    // 0x15b6dc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x15B6DCu;
    {
        const bool branch_taken_0x15b6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b6dc) {
            ctx->pc = 0x15B758u;
            goto label_15b758;
        }
    }
    ctx->pc = 0x15B6E4u;
    // 0x15b6e4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15B6E4u;
    SET_GPR_U32(ctx, 31, 0x15B6ECu);
    ctx->pc = 0x15B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6E4u;
    // 0x15b6e8: 0x240400b3  addiu       $a0, $zero, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B6E4u, 0x15B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6ECu;
label_15b6ec:
    // 0x15b6ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6f0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15B6F0u;
    SET_GPR_U32(ctx, 31, 0x15B6F8u);
    ctx->pc = 0x15B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6F0u;
    // 0x15b6f4: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B6F0u, 0x15B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6F8u;
label_15b6f8:
    // 0x15b6f8: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x15b6fc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15B6FCu;
    SET_GPR_U32(ctx, 31, 0x15B704u);
    ctx->pc = 0x15B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6FCu;
    // 0x15b700: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B6FCu, 0x15B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B704u;
label_15b704:
    // 0x15b704: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15b708: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15b70c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15b70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15b710: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15b710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15b714: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15b714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b718: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15b718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b71c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15b720: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15b724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b728: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b72c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b730: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b734: 0x2443f188  addiu       $v1, $v0, -0xE78
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
    // 0x15b738: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15b738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x15b73c: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15b73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x15b740: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15b740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b744: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15b744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b748: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15B748u;
    SET_GPR_U32(ctx, 31, 0x15B750u);
    ctx->pc = 0x15B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B748u;
    // 0x15b74c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15B748u, 0x15B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B750u;
label_15b750:
    // 0x15b750: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15B750u;
    {
        const bool branch_taken_0x15b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B750u;
        // 0x15b754: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b750) {
            ctx->pc = 0x15B7C8u;
            goto label_15b7c8;
        }
    }
    ctx->pc = 0x15B758u;
label_15b758:
    // 0x15b758: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15B758u;
    SET_GPR_U32(ctx, 31, 0x15B760u);
    ctx->pc = 0x15B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B758u;
    // 0x15b75c: 0x240400b2  addiu       $a0, $zero, 0xB2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B758u, 0x15B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B760u;
label_15b760:
    // 0x15b760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b764: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15B764u;
    SET_GPR_U32(ctx, 31, 0x15B76Cu);
    ctx->pc = 0x15B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B764u;
    // 0x15b768: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B764u, 0x15B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B76Cu;
label_15b76c:
    // 0x15b76c: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x15b770: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15B770u;
    SET_GPR_U32(ctx, 31, 0x15B778u);
    ctx->pc = 0x15B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B770u;
    // 0x15b774: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B770u, 0x15B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B778u;
label_15b778:
    // 0x15b778: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15b778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15b77c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15b780: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x15b780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x15b784: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x15b784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x15b788: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x15b788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b78c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x15b78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b790: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15b794: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15b798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b79c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b7a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7a8: 0x244af188  addiu       $t2, $v0, -0xE78
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
    // 0x15b7ac: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x15b7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x15b7b0: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x15b7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x15b7b4: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x15b7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b7b8: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x15b7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b7bc: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15B7BCu;
    SET_GPR_U32(ctx, 31, 0x15B7C4u);
    ctx->pc = 0x15B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B7BCu;
    // 0x15b7c0: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15B7BCu, 0x15B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B7C4u;
label_15b7c4:
    // 0x15b7c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b7c8:
    // 0x15b7c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15b7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b7cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b7d0: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
    // 0x15b7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x15B7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7D4u;
        // 0x15b7d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B7DCu;
    // 0x15b7dc: 0x0  nop
    ctx->pc = 0x15b7dcu;
    // NOP
    ctx->pc = 0x15b7e0u;
}
