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

// Function: sub_0015AC88
// Address: 0x15ac88 - 0x15ad80
void sub_0015AC88_0x15ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC88_0x15ac88");
#endif

    switch (ctx->pc) {
        case 0x15ac88u: goto label_15ac88;
        case 0x15ac8cu: goto label_15ac8c;
        case 0x15ac90u: goto label_15ac90;
        case 0x15ac94u: goto label_15ac94;
        case 0x15ac98u: goto label_15ac98;
        case 0x15ac9cu: goto label_15ac9c;
        case 0x15aca0u: goto label_15aca0;
        case 0x15aca4u: goto label_15aca4;
        case 0x15aca8u: goto label_15aca8;
        case 0x15acacu: goto label_15acac;
        case 0x15acb0u: goto label_15acb0;
        case 0x15acb4u: goto label_15acb4;
        case 0x15acb8u: goto label_15acb8;
        case 0x15acbcu: goto label_15acbc;
        case 0x15acc0u: goto label_15acc0;
        case 0x15acc4u: goto label_15acc4;
        case 0x15acc8u: goto label_15acc8;
        case 0x15acccu: goto label_15accc;
        case 0x15acd0u: goto label_15acd0;
        case 0x15acd4u: goto label_15acd4;
        case 0x15acd8u: goto label_15acd8;
        case 0x15acdcu: goto label_15acdc;
        case 0x15ace0u: goto label_15ace0;
        case 0x15ace4u: goto label_15ace4;
        case 0x15ace8u: goto label_15ace8;
        case 0x15acecu: goto label_15acec;
        case 0x15acf0u: goto label_15acf0;
        case 0x15acf4u: goto label_15acf4;
        case 0x15acf8u: goto label_15acf8;
        case 0x15acfcu: goto label_15acfc;
        case 0x15ad00u: goto label_15ad00;
        case 0x15ad04u: goto label_15ad04;
        case 0x15ad08u: goto label_15ad08;
        case 0x15ad0cu: goto label_15ad0c;
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad14u: goto label_15ad14;
        case 0x15ad18u: goto label_15ad18;
        case 0x15ad1cu: goto label_15ad1c;
        case 0x15ad20u: goto label_15ad20;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad28u: goto label_15ad28;
        case 0x15ad2cu: goto label_15ad2c;
        case 0x15ad30u: goto label_15ad30;
        case 0x15ad34u: goto label_15ad34;
        case 0x15ad38u: goto label_15ad38;
        case 0x15ad3cu: goto label_15ad3c;
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad44u: goto label_15ad44;
        case 0x15ad48u: goto label_15ad48;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad50u: goto label_15ad50;
        case 0x15ad54u: goto label_15ad54;
        case 0x15ad58u: goto label_15ad58;
        case 0x15ad5cu: goto label_15ad5c;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad64u: goto label_15ad64;
        case 0x15ad68u: goto label_15ad68;
        case 0x15ad6cu: goto label_15ad6c;
        case 0x15ad70u: goto label_15ad70;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad78u: goto label_15ad78;
        case 0x15ad7cu: goto label_15ad7c;
        default: break;
    }

    ctx->pc = 0x15ac88u;

label_15ac88:
    // 0x15ac88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15ac8c:
    // 0x15ac8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15ac90:
    // 0x15ac90: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15ac94:
    // 0x15ac94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15ac98:
    // 0x15ac98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15ac9c:
    // 0x15ac9c: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15aca0:
    // 0x15aca0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15aca4:
    // 0x15aca4: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_15aca8:
    // 0x15aca8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x15aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_15acac:
    // 0x15acac: 0x40f809  jalr        $v0
label_15acb0:
    if (ctx->pc == 0x15ACB0u) {
        ctx->pc = 0x15ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACACu;
        // 0x15acb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACB4u;
        goto label_15acb4;
    }
    ctx->pc = 0x15ACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ACB4u);
        ctx->pc = 0x15ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACACu;
        // 0x15acb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ACACu, 0x15ACB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ACB4u;
label_15acb4:
    // 0x15acb4: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15acb8:
    // 0x15acb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15acb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15acbc:
    // 0x15acbc: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15acc0:
    // 0x15acc0: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_15acc4:
    // 0x15acc4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x15acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_15acc8:
    // 0x15acc8: 0x40f809  jalr        $v0
label_15accc:
    if (ctx->pc == 0x15ACCCu) {
        ctx->pc = 0x15ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACC8u;
        // 0x15accc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACD0u;
        goto label_15acd0;
    }
    ctx->pc = 0x15ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ACD0u);
        ctx->pc = 0x15ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACC8u;
        // 0x15accc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ACC8u, 0x15ACD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ACD0u;
label_15acd0:
    // 0x15acd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15acd4:
    if (ctx->pc == 0x15ACD4u) {
        ctx->pc = 0x15ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACD0u;
        // 0x15acd4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACD8u;
        goto label_15acd8;
    }
    ctx->pc = 0x15ACD0u;
    {
        const bool branch_taken_0x15acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACD0u;
        // 0x15acd4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acd0) {
            ctx->pc = 0x15ACE8u;
            goto label_15ace8;
        }
    }
    ctx->pc = 0x15ACD8u;
label_15acd8:
    // 0x15acd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15acdc:
    // 0x15acdc: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x15acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
label_15ace0:
    // 0x15ace0: 0x10000021  b           . + 4 + (0x21 << 2)
label_15ace4:
    if (ctx->pc == 0x15ACE4u) {
        ctx->pc = 0x15ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACE0u;
        // 0x15ace4: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACE8u;
        goto label_15ace8;
    }
    ctx->pc = 0x15ACE0u;
    {
        const bool branch_taken_0x15ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACE0u;
        // 0x15ace4: 0xac62c734  sw          $v0, -0x38CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ace0) {
            ctx->pc = 0x15AD68u;
            goto label_15ad68;
        }
    }
    ctx->pc = 0x15ACE8u;
label_15ace8:
    // 0x15ace8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_15acec:
    if (ctx->pc == 0x15ACECu) {
        ctx->pc = 0x15ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACE8u;
        // 0x15acec: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACF0u;
        goto label_15acf0;
    }
    ctx->pc = 0x15ACE8u;
    {
        const bool branch_taken_0x15ace8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACE8u;
        // 0x15acec: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ace8) {
            ctx->pc = 0x15ACF4u;
            goto label_15acf4;
        }
    }
    ctx->pc = 0x15ACF0u;
label_15acf0:
    // 0x15acf0: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x15acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_15acf4:
    // 0x15acf4: 0xc067b9c  jal         func_19EE70
label_15acf8:
    if (ctx->pc == 0x15ACF8u) {
        ctx->pc = 0x15ACFCu;
        goto label_15acfc;
    }
    ctx->pc = 0x15ACF4u;
    SET_GPR_U32(ctx, 31, 0x15ACFCu);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15ACF4u, 0x15ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACFCu;
label_15acfc:
    // 0x15acfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ad00:
    // 0x15ad00: 0xc067b9c  jal         func_19EE70
label_15ad04:
    if (ctx->pc == 0x15AD04u) {
        ctx->pc = 0x15AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD00u;
        // 0x15ad04: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD08u;
        goto label_15ad08;
    }
    ctx->pc = 0x15AD00u;
    SET_GPR_U32(ctx, 31, 0x15AD08u);
    ctx->pc = 0x15AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD00u;
    // 0x15ad04: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AD00u, 0x15AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD08u;
label_15ad08:
    // 0x15ad08: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x15ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_15ad0c:
    // 0x15ad0c: 0xc067b9c  jal         func_19EE70
label_15ad10:
    if (ctx->pc == 0x15AD10u) {
        ctx->pc = 0x15AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD0Cu;
        // 0x15ad10: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD14u;
        goto label_15ad14;
    }
    ctx->pc = 0x15AD0Cu;
    SET_GPR_U32(ctx, 31, 0x15AD14u);
    ctx->pc = 0x15AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD0Cu;
    // 0x15ad10: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AD0Cu, 0x15AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD14u;
label_15ad14:
    // 0x15ad14: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15ad18:
    // 0x15ad18: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15ad1c:
    // 0x15ad1c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15ad1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15ad20:
    // 0x15ad20: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15ad20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15ad24:
    // 0x15ad24: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15ad24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ad28:
    // 0x15ad28: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15ad28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ad2c:
    // 0x15ad2c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15ad30:
    // 0x15ad30: 0x2443f1a0  addiu       $v1, $v0, -0xE60
    ctx->pc = 0x15ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
label_15ad34:
    // 0x15ad34: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15ad34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15ad38:
    // 0x15ad38: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15ad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15ad3c:
    // 0x15ad3c: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15ad3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ad40:
    // 0x15ad40: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15ad40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ad44:
    // 0x15ad44: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15ad48:
    // 0x15ad48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ad48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ad4c:
    // 0x15ad4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ad50:
    // 0x15ad50: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15ad50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ad54:
    // 0x15ad54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ad54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ad58:
    // 0x15ad58: 0xc071c4a  jal         func_1C7128
label_15ad5c:
    if (ctx->pc == 0x15AD5Cu) {
        ctx->pc = 0x15AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD58u;
        // 0x15ad5c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD60u;
        goto label_15ad60;
    }
    ctx->pc = 0x15AD58u;
    SET_GPR_U32(ctx, 31, 0x15AD60u);
    ctx->pc = 0x15AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD58u;
    // 0x15ad5c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15AD58u, 0x15AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD60u;
label_15ad60:
    // 0x15ad60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ad64:
    // 0x15ad64: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
label_15ad68:
    // 0x15ad68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15ad68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ad6c:
    // 0x15ad6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15ad6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15ad70:
    // 0x15ad70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ad74:
    // 0x15ad74: 0x3e00008  jr          $ra
label_15ad78:
    if (ctx->pc == 0x15AD78u) {
        ctx->pc = 0x15AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD74u;
        // 0x15ad78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD7Cu;
        goto label_15ad7c;
    }
    ctx->pc = 0x15AD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD74u;
        // 0x15ad78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AD7Cu;
label_15ad7c:
    // 0x15ad7c: 0x0  nop
    ctx->pc = 0x15ad7cu;
    // NOP
    ctx->pc = 0x15ad80u;
}
