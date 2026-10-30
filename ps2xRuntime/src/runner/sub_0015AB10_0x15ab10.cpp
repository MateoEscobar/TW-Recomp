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

// Function: sub_0015AB10
// Address: 0x15ab10 - 0x15ac08
void sub_0015AB10_0x15ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AB10_0x15ab10");
#endif

    switch (ctx->pc) {
        case 0x15ab10u: goto label_15ab10;
        case 0x15ab14u: goto label_15ab14;
        case 0x15ab18u: goto label_15ab18;
        case 0x15ab1cu: goto label_15ab1c;
        case 0x15ab20u: goto label_15ab20;
        case 0x15ab24u: goto label_15ab24;
        case 0x15ab28u: goto label_15ab28;
        case 0x15ab2cu: goto label_15ab2c;
        case 0x15ab30u: goto label_15ab30;
        case 0x15ab34u: goto label_15ab34;
        case 0x15ab38u: goto label_15ab38;
        case 0x15ab3cu: goto label_15ab3c;
        case 0x15ab40u: goto label_15ab40;
        case 0x15ab44u: goto label_15ab44;
        case 0x15ab48u: goto label_15ab48;
        case 0x15ab4cu: goto label_15ab4c;
        case 0x15ab50u: goto label_15ab50;
        case 0x15ab54u: goto label_15ab54;
        case 0x15ab58u: goto label_15ab58;
        case 0x15ab5cu: goto label_15ab5c;
        case 0x15ab60u: goto label_15ab60;
        case 0x15ab64u: goto label_15ab64;
        case 0x15ab68u: goto label_15ab68;
        case 0x15ab6cu: goto label_15ab6c;
        case 0x15ab70u: goto label_15ab70;
        case 0x15ab74u: goto label_15ab74;
        case 0x15ab78u: goto label_15ab78;
        case 0x15ab7cu: goto label_15ab7c;
        case 0x15ab80u: goto label_15ab80;
        case 0x15ab84u: goto label_15ab84;
        case 0x15ab88u: goto label_15ab88;
        case 0x15ab8cu: goto label_15ab8c;
        case 0x15ab90u: goto label_15ab90;
        case 0x15ab94u: goto label_15ab94;
        case 0x15ab98u: goto label_15ab98;
        case 0x15ab9cu: goto label_15ab9c;
        case 0x15aba0u: goto label_15aba0;
        case 0x15aba4u: goto label_15aba4;
        case 0x15aba8u: goto label_15aba8;
        case 0x15abacu: goto label_15abac;
        case 0x15abb0u: goto label_15abb0;
        case 0x15abb4u: goto label_15abb4;
        case 0x15abb8u: goto label_15abb8;
        case 0x15abbcu: goto label_15abbc;
        case 0x15abc0u: goto label_15abc0;
        case 0x15abc4u: goto label_15abc4;
        case 0x15abc8u: goto label_15abc8;
        case 0x15abccu: goto label_15abcc;
        case 0x15abd0u: goto label_15abd0;
        case 0x15abd4u: goto label_15abd4;
        case 0x15abd8u: goto label_15abd8;
        case 0x15abdcu: goto label_15abdc;
        case 0x15abe0u: goto label_15abe0;
        case 0x15abe4u: goto label_15abe4;
        case 0x15abe8u: goto label_15abe8;
        case 0x15abecu: goto label_15abec;
        case 0x15abf0u: goto label_15abf0;
        case 0x15abf4u: goto label_15abf4;
        case 0x15abf8u: goto label_15abf8;
        case 0x15abfcu: goto label_15abfc;
        case 0x15ac00u: goto label_15ac00;
        case 0x15ac04u: goto label_15ac04;
        default: break;
    }

    ctx->pc = 0x15ab10u;

label_15ab10:
    // 0x15ab10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15ab14:
    // 0x15ab14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ab18:
    // 0x15ab18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_15ab1c:
    // 0x15ab1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x15ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_15ab20:
    // 0x15ab20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x15ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_15ab24:
    // 0x15ab24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ab28:
    // 0x15ab28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15ab2c:
    // 0x15ab2c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x15ab2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_15ab30:
    // 0x15ab30: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15ab34:
    // 0x15ab34: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15ab38:
    // 0x15ab38: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x15ab38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_15ab3c:
    // 0x15ab3c: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x15ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_15ab40:
    // 0x15ab40: 0x40f809  jalr        $v0
label_15ab44:
    if (ctx->pc == 0x15AB44u) {
        ctx->pc = 0x15AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB40u;
        // 0x15ab44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB48u;
        goto label_15ab48;
    }
    ctx->pc = 0x15AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AB48u);
        ctx->pc = 0x15AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB40u;
        // 0x15ab44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB40u, 0x15AB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AB48u;
label_15ab48:
    // 0x15ab48: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x15ab48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_15ab4c:
    // 0x15ab4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15ab4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ab50:
    // 0x15ab50: 0x2610f178  addiu       $s0, $s0, -0xE88
    ctx->pc = 0x15ab50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963576));
label_15ab54:
    // 0x15ab54: 0xc067b9c  jal         func_19EE70
label_15ab58:
    if (ctx->pc == 0x15AB58u) {
        ctx->pc = 0x15AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB54u;
        // 0x15ab58: 0x240400a5  addiu       $a0, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB5Cu;
        goto label_15ab5c;
    }
    ctx->pc = 0x15AB54u;
    SET_GPR_U32(ctx, 31, 0x15AB5Cu);
    ctx->pc = 0x15AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB54u;
    // 0x15ab58: 0x240400a5  addiu       $a0, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AB54u, 0x15AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB5Cu;
label_15ab5c:
    // 0x15ab5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ab5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ab60:
    // 0x15ab60: 0xc067b9c  jal         func_19EE70
label_15ab64:
    if (ctx->pc == 0x15AB64u) {
        ctx->pc = 0x15AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB60u;
        // 0x15ab64: 0x240400a6  addiu       $a0, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB68u;
        goto label_15ab68;
    }
    ctx->pc = 0x15AB60u;
    SET_GPR_U32(ctx, 31, 0x15AB68u);
    ctx->pc = 0x15AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB60u;
    // 0x15ab64: 0x240400a6  addiu       $a0, $zero, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AB60u, 0x15AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB68u;
label_15ab68:
    // 0x15ab68: 0x8e64c738  lw          $a0, -0x38C8($s3)
    ctx->pc = 0x15ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952760)));
label_15ab6c:
    // 0x15ab6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ab70:
    // 0x15ab70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ab70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ab74:
    // 0x15ab74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15ab74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ab78:
    // 0x15ab78: 0xc10ca28  jal         func_4328A0
label_15ab7c:
    if (ctx->pc == 0x15AB7Cu) {
        ctx->pc = 0x15AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB78u;
        // 0x15ab7c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB80u;
        goto label_15ab80;
    }
    ctx->pc = 0x15AB78u;
    SET_GPR_U32(ctx, 31, 0x15AB80u);
    ctx->pc = 0x15AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB78u;
    // 0x15ab7c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15AB78u, 0x15AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB80u;
label_15ab80:
    // 0x15ab80: 0x8e70c738  lw          $s0, -0x38C8($s3)
    ctx->pc = 0x15ab80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952760)));
label_15ab84:
    // 0x15ab84: 0xc067b9c  jal         func_19EE70
label_15ab88:
    if (ctx->pc == 0x15AB88u) {
        ctx->pc = 0x15AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB84u;
        // 0x15ab88: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB8Cu;
        goto label_15ab8c;
    }
    ctx->pc = 0x15AB84u;
    SET_GPR_U32(ctx, 31, 0x15AB8Cu);
    ctx->pc = 0x15AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB84u;
    // 0x15ab88: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AB84u, 0x15AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB8Cu;
label_15ab8c:
    // 0x15ab8c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_15ab90:
    // 0x15ab90: 0xc067b9c  jal         func_19EE70
label_15ab94:
    if (ctx->pc == 0x15AB94u) {
        ctx->pc = 0x15AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB90u;
        // 0x15ab94: 0x240400bd  addiu       $a0, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB98u;
        goto label_15ab98;
    }
    ctx->pc = 0x15AB90u;
    SET_GPR_U32(ctx, 31, 0x15AB98u);
    ctx->pc = 0x15AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB90u;
    // 0x15ab94: 0x240400bd  addiu       $a0, $zero, 0xBD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AB90u, 0x15AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB98u;
label_15ab98:
    // 0x15ab98: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15ab9c:
    // 0x15ab9c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15aba0:
    // 0x15aba0: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15aba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15aba4:
    // 0x15aba4: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15aba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15aba8:
    // 0x15aba8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15aba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15abac:
    // 0x15abac: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15abacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15abb0:
    // 0x15abb0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15abb4:
    // 0x15abb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15abb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15abb8:
    // 0x15abb8: 0x2443f180  addiu       $v1, $v0, -0xE80
    ctx->pc = 0x15abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
label_15abbc:
    // 0x15abbc: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15abbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15abc0:
    // 0x15abc0: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15abc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15abc4:
    // 0x15abc4: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15abc8:
    // 0x15abc8: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15abc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15abcc:
    // 0x15abcc: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15abd0:
    // 0x15abd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15abd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15abd4:
    // 0x15abd4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15abd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15abd8:
    // 0x15abd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15abd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15abdc:
    // 0x15abdc: 0xc071c4a  jal         func_1C7128
label_15abe0:
    if (ctx->pc == 0x15ABE0u) {
        ctx->pc = 0x15ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABDCu;
        // 0x15abe0: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ABE4u;
        goto label_15abe4;
    }
    ctx->pc = 0x15ABDCu;
    SET_GPR_U32(ctx, 31, 0x15ABE4u);
    ctx->pc = 0x15ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ABDCu;
    // 0x15abe0: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15ABDCu, 0x15ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ABE4u;
label_15abe4:
    // 0x15abe4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15abe8:
    // 0x15abe8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x15abe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15abec:
    // 0x15abec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15abecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15abf0:
    // 0x15abf0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15abf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15abf4:
    // 0x15abf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15abf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15abf8:
    // 0x15abf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15abfc:
    // 0x15abfc: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
label_15ac00:
    // 0x15ac00: 0x3e00008  jr          $ra
label_15ac04:
    if (ctx->pc == 0x15AC04u) {
        ctx->pc = 0x15AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC00u;
        // 0x15ac04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC08u;
        goto label_fallthrough_0x15ac00;
    }
    ctx->pc = 0x15AC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC00u;
        // 0x15ac04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ac00:
    ctx->pc = 0x15AC08u;
}
