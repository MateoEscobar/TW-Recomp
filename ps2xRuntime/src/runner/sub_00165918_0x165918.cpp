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

// Function: sub_00165918
// Address: 0x165918 - 0x165a20
void sub_00165918_0x165918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165918_0x165918");
#endif

    switch (ctx->pc) {
        case 0x165918u: goto label_165918;
        case 0x16591cu: goto label_16591c;
        case 0x165920u: goto label_165920;
        case 0x165924u: goto label_165924;
        case 0x165928u: goto label_165928;
        case 0x16592cu: goto label_16592c;
        case 0x165930u: goto label_165930;
        case 0x165934u: goto label_165934;
        case 0x165938u: goto label_165938;
        case 0x16593cu: goto label_16593c;
        case 0x165940u: goto label_165940;
        case 0x165944u: goto label_165944;
        case 0x165948u: goto label_165948;
        case 0x16594cu: goto label_16594c;
        case 0x165950u: goto label_165950;
        case 0x165954u: goto label_165954;
        case 0x165958u: goto label_165958;
        case 0x16595cu: goto label_16595c;
        case 0x165960u: goto label_165960;
        case 0x165964u: goto label_165964;
        case 0x165968u: goto label_165968;
        case 0x16596cu: goto label_16596c;
        case 0x165970u: goto label_165970;
        case 0x165974u: goto label_165974;
        case 0x165978u: goto label_165978;
        case 0x16597cu: goto label_16597c;
        case 0x165980u: goto label_165980;
        case 0x165984u: goto label_165984;
        case 0x165988u: goto label_165988;
        case 0x16598cu: goto label_16598c;
        case 0x165990u: goto label_165990;
        case 0x165994u: goto label_165994;
        case 0x165998u: goto label_165998;
        case 0x16599cu: goto label_16599c;
        case 0x1659a0u: goto label_1659a0;
        case 0x1659a4u: goto label_1659a4;
        case 0x1659a8u: goto label_1659a8;
        case 0x1659acu: goto label_1659ac;
        case 0x1659b0u: goto label_1659b0;
        case 0x1659b4u: goto label_1659b4;
        case 0x1659b8u: goto label_1659b8;
        case 0x1659bcu: goto label_1659bc;
        case 0x1659c0u: goto label_1659c0;
        case 0x1659c4u: goto label_1659c4;
        case 0x1659c8u: goto label_1659c8;
        case 0x1659ccu: goto label_1659cc;
        case 0x1659d0u: goto label_1659d0;
        case 0x1659d4u: goto label_1659d4;
        case 0x1659d8u: goto label_1659d8;
        case 0x1659dcu: goto label_1659dc;
        case 0x1659e0u: goto label_1659e0;
        case 0x1659e4u: goto label_1659e4;
        case 0x1659e8u: goto label_1659e8;
        case 0x1659ecu: goto label_1659ec;
        case 0x1659f0u: goto label_1659f0;
        case 0x1659f4u: goto label_1659f4;
        case 0x1659f8u: goto label_1659f8;
        case 0x1659fcu: goto label_1659fc;
        case 0x165a00u: goto label_165a00;
        case 0x165a04u: goto label_165a04;
        case 0x165a08u: goto label_165a08;
        case 0x165a0cu: goto label_165a0c;
        case 0x165a10u: goto label_165a10;
        case 0x165a14u: goto label_165a14;
        case 0x165a18u: goto label_165a18;
        case 0x165a1cu: goto label_165a1c;
        default: break;
    }

    ctx->pc = 0x165918u;

label_165918:
    // 0x165918: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x165918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16591c:
    // 0x16591c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_165920:
    // 0x165920: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x165920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_165924:
    // 0x165924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165928:
    // 0x165928: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x165928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_16592c:
    // 0x16592c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_165930:
    // 0x165930: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x165930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_165934:
    // 0x165934: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_165938:
    if (ctx->pc == 0x165938u) {
        ctx->pc = 0x165938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165934u;
        // 0x165938: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16593Cu;
        goto label_16593c;
    }
    ctx->pc = 0x165934u;
    {
        const bool branch_taken_0x165934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165934u;
        // 0x165938: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165934) {
            ctx->pc = 0x16595Cu;
            goto label_16595c;
        }
    }
    ctx->pc = 0x16593Cu;
label_16593c:
    // 0x16593c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x16593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_165940:
    // 0x165940: 0x244610e8  addiu       $a2, $v0, 0x10E8
    ctx->pc = 0x165940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4328));
label_165944:
    // 0x165944: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x165944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_165948:
    // 0x165948: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x165948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_16594c:
    // 0x16594c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x16594cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_165950:
    // 0x165950: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x165950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_165954:
    // 0x165954: 0x10000007  b           . + 4 + (0x7 << 2)
label_165958:
    if (ctx->pc == 0x165958u) {
        ctx->pc = 0x16595Cu;
        goto label_16595c;
    }
    ctx->pc = 0x165954u;
    {
        const bool branch_taken_0x165954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165954) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x16595Cu;
label_16595c:
    // 0x16595c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x16595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_165960:
    // 0x165960: 0x244610f0  addiu       $a2, $v0, 0x10F0
    ctx->pc = 0x165960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
label_165964:
    // 0x165964: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x165964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_165968:
    // 0x165968: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x165968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_16596c:
    // 0x16596c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x16596cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_165970:
    // 0x165970: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x165970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_165974:
    // 0x165974: 0xc05959e  jal         func_165678
label_165978:
    if (ctx->pc == 0x165978u) {
        ctx->pc = 0x165978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165974u;
        // 0x165978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16597Cu;
        goto label_16597c;
    }
    ctx->pc = 0x165974u;
    SET_GPR_U32(ctx, 31, 0x16597Cu);
    ctx->pc = 0x165978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165974u;
    // 0x165978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x165974u, 0x16597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16597Cu;
label_16597c:
    // 0x16597c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165980:
    // 0x165980: 0x5220001f  beql        $s1, $zero, . + 4 + (0x1F << 2)
label_165984:
    if (ctx->pc == 0x165984u) {
        ctx->pc = 0x165984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165980u;
        // 0x165984: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165988u;
        goto label_165988;
    }
    ctx->pc = 0x165980u;
    {
        const bool branch_taken_0x165980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x165980) {
            ctx->pc = 0x165984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165980u;
            // 0x165984: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A00u;
            goto label_165a00;
        }
    }
    ctx->pc = 0x165988u;
label_165988:
    // 0x165988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16598c:
    // 0x16598c: 0xc08750a  jal         func_21D428
label_165990:
    if (ctx->pc == 0x165990u) {
        ctx->pc = 0x165990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16598Cu;
        // 0x165990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165994u;
        goto label_165994;
    }
    ctx->pc = 0x16598Cu;
    SET_GPR_U32(ctx, 31, 0x165994u);
    ctx->pc = 0x165990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16598Cu;
    // 0x165990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x16598Cu, 0x165994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165994u;
label_165994:
    // 0x165994: 0x26130048  addiu       $s3, $s0, 0x48
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_165998:
    // 0x165998: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16599c:
    // 0x16599c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16599cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1659a0:
    // 0x1659a0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1659a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1659a4:
    // 0x1659a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1659a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1659a8:
    // 0x1659a8: 0xc137826  jal         func_4DE098
label_1659ac:
    if (ctx->pc == 0x1659ACu) {
        ctx->pc = 0x1659ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659A8u;
        // 0x1659ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659B0u;
        goto label_1659b0;
    }
    ctx->pc = 0x1659A8u;
    SET_GPR_U32(ctx, 31, 0x1659B0u);
    ctx->pc = 0x1659ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659A8u;
    // 0x1659ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x1659A8u, 0x1659B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659B0u;
label_1659b0:
    // 0x1659b0: 0xc0e409a  jal         func_390268
label_1659b4:
    if (ctx->pc == 0x1659B4u) {
        ctx->pc = 0x1659B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659B0u;
        // 0x1659b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659B8u;
        goto label_1659b8;
    }
    ctx->pc = 0x1659B0u;
    SET_GPR_U32(ctx, 31, 0x1659B8u);
    ctx->pc = 0x1659B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659B0u;
    // 0x1659b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1659B0u, 0x1659B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659B8u;
label_1659b8:
    // 0x1659b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1659b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1659bc:
    // 0x1659bc: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_1659c0:
    if (ctx->pc == 0x1659C0u) {
        ctx->pc = 0x1659C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659BCu;
        // 0x1659c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659C4u;
        goto label_1659c4;
    }
    ctx->pc = 0x1659BCu;
    {
        const bool branch_taken_0x1659bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659bc) {
            ctx->pc = 0x1659C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1659BCu;
            // 0x1659c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1659F0u;
            goto label_1659f0;
        }
    }
    ctx->pc = 0x1659C4u;
label_1659c4:
    // 0x1659c4: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_1659c8:
    // 0x1659c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1659c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1659cc:
    // 0x1659cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1659d0:
    // 0x1659d0: 0x50540007  beql        $v0, $s4, . + 4 + (0x7 << 2)
label_1659d4:
    if (ctx->pc == 0x1659D4u) {
        ctx->pc = 0x1659D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659D0u;
        // 0x1659d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659D8u;
        goto label_1659d8;
    }
    ctx->pc = 0x1659D0u;
    {
        const bool branch_taken_0x1659d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1659d0) {
            ctx->pc = 0x1659D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1659D0u;
            // 0x1659d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1659F0u;
            goto label_1659f0;
        }
    }
    ctx->pc = 0x1659D8u;
label_1659d8:
    // 0x1659d8: 0x10b10004  beq         $a1, $s1, . + 4 + (0x4 << 2)
label_1659dc:
    if (ctx->pc == 0x1659DCu) {
        ctx->pc = 0x1659DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659D8u;
        // 0x1659dc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659E0u;
        goto label_1659e0;
    }
    ctx->pc = 0x1659D8u;
    {
        const bool branch_taken_0x1659d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x1659DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659D8u;
        // 0x1659dc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659d8) {
            ctx->pc = 0x1659ECu;
            goto label_1659ec;
        }
    }
    ctx->pc = 0x1659E0u;
label_1659e0:
    // 0x1659e0: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x1659e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_1659e4:
    // 0x1659e4: 0x40f809  jalr        $v0
label_1659e8:
    if (ctx->pc == 0x1659E8u) {
        ctx->pc = 0x1659E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659E4u;
        // 0x1659e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659ECu;
        goto label_1659ec;
    }
    ctx->pc = 0x1659E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1659ECu);
        ctx->pc = 0x1659E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659E4u;
        // 0x1659e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1659E4u, 0x1659ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1659ECu;
label_1659ec:
    // 0x1659ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1659ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1659f0:
    // 0x1659f0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x1659f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1659f4:
    // 0x1659f4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1659f8:
    if (ctx->pc == 0x1659F8u) {
        ctx->pc = 0x1659F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659F4u;
        // 0x1659f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659FCu;
        goto label_1659fc;
    }
    ctx->pc = 0x1659F4u;
    {
        const bool branch_taken_0x1659f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659F4u;
        // 0x1659f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659f4) {
            ctx->pc = 0x1659A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1659a8;
        }
    }
    ctx->pc = 0x1659FCu;
label_1659fc:
    // 0x1659fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1659fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_165a00:
    // 0x165a00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x165a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_165a04:
    // 0x165a04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x165a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_165a08:
    // 0x165a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165a0c:
    // 0x165a0c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x165a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165a10:
    // 0x165a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165a14:
    // 0x165a14: 0x3e00008  jr          $ra
label_165a18:
    if (ctx->pc == 0x165A18u) {
        ctx->pc = 0x165A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A14u;
        // 0x165a18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165A1Cu;
        goto label_165a1c;
    }
    ctx->pc = 0x165A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A14u;
        // 0x165a18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A1Cu;
label_165a1c:
    // 0x165a1c: 0x0  nop
    ctx->pc = 0x165a1cu;
    // NOP
    ctx->pc = 0x165a20u;
}
