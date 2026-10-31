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

// Function: sub_00411D10
// Address: 0x411d10 - 0x411eb0
void sub_00411D10_0x411d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411D10_0x411d10");
#endif

    switch (ctx->pc) {
        case 0x411d54u: goto label_411d54;
        case 0x411d78u: goto label_411d78;
        case 0x411d88u: goto label_411d88;
        case 0x411da0u: goto label_411da0;
        case 0x411db4u: goto label_411db4;
        case 0x411dc8u: goto label_411dc8;
        case 0x411dd4u: goto label_411dd4;
        case 0x411dfcu: goto label_411dfc;
        case 0x411e08u: goto label_411e08;
        case 0x411e14u: goto label_411e14;
        case 0x411e1cu: goto label_411e1c;
        case 0x411e44u: goto label_411e44;
        case 0x411e5cu: goto label_411e5c;
        case 0x411e70u: goto label_411e70;
        case 0x411e78u: goto label_411e78;
        case 0x411e84u: goto label_411e84;
        default: break;
    }

    ctx->pc = 0x411d10u;

label_411d10:
    // 0x411d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x411d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x411d14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x411d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x411d18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x411d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x411d1c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x411d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x411d20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x411d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411d24: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x411d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x411d28: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x411d28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411d2c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x411d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x411d30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x411d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x411d34: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x411d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x411d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x411d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x411d3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x411d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x411d40: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x411d40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x411d44: 0x8e93215c  lw          $s3, 0x215C($s4)
    ctx->pc = 0x411d44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8540)));
    // 0x411d48: 0x8c750004  lw          $s5, 0x4($v1)
    ctx->pc = 0x411d48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x411d4c: 0xc12fbda  jal         func_4BEF68
    ctx->pc = 0x411D4Cu;
    SET_GPR_U32(ctx, 31, 0x411D54u);
    ctx->pc = 0x411D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411D4Cu;
    // 0x411d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEF68u, 0x411D4Cu, 0x411D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411D54u;
label_411d54:
    // 0x411d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x411D54u;
    {
        const bool branch_taken_0x411d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D54u;
        // 0x411d58: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411d54) {
            ctx->pc = 0x411D64u;
            goto label_411d64;
        }
    }
    ctx->pc = 0x411D5Cu;
    // 0x411d5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x411D5Cu;
    {
        const bool branch_taken_0x411d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D5Cu;
        // 0x411d60: 0x8c50539c  lw          $s0, 0x539C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411d5c) {
            ctx->pc = 0x411D68u;
            goto label_411d68;
        }
    }
    ctx->pc = 0x411D64u;
label_411d64:
    // 0x411d64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x411d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411d68:
    // 0x411d68: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x411D68u;
    {
        const bool branch_taken_0x411d68 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x411D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D68u;
        // 0x411d6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411d68) {
            ctx->pc = 0x411D8Cu;
            goto label_411d8c;
        }
    }
    ctx->pc = 0x411D70u;
    // 0x411d70: 0xc1048fa  jal         func_4123E8
    ctx->pc = 0x411D70u;
    SET_GPR_U32(ctx, 31, 0x411D78u);
    ctx->pc = 0x411D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411D70u;
    // 0x411d74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123E8u, 0x411D70u, 0x411D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411D78u;
label_411d78:
    // 0x411d78: 0x26840018  addiu       $a0, $s4, 0x18
    ctx->pc = 0x411d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x411d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x411d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411d80: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x411D80u;
    SET_GPR_U32(ctx, 31, 0x411D88u);
    ctx->pc = 0x411D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411D80u;
    // 0x411d84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x411D80u, 0x411D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411D88u;
label_411d88:
    // 0x411d88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411d8c:
    // 0x411d8c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x411D8Cu;
    {
        const bool branch_taken_0x411d8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x411D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D8Cu;
        // 0x411d90: 0xac5447ec  sw          $s4, 0x47EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18412), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411d8c) {
            ctx->pc = 0x411E50u;
            goto label_411e50;
        }
    }
    ctx->pc = 0x411D94u;
    // 0x411d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x411d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411d98: 0xc12fbfe  jal         func_4BEFF8
    ctx->pc = 0x411D98u;
    SET_GPR_U32(ctx, 31, 0x411DA0u);
    ctx->pc = 0x411D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411D98u;
    // 0x411d9c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEFF8u, 0x411D98u, 0x411DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411DA0u;
label_411da0:
    // 0x411da0: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x411da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x411da4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x411da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411da8: 0x26113a00  addiu       $s1, $s0, 0x3A00
    ctx->pc = 0x411da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14848));
    // 0x411dac: 0xc11c76e  jal         func_471DB8
    ctx->pc = 0x411DACu;
    SET_GPR_U32(ctx, 31, 0x411DB4u);
    ctx->pc = 0x411DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411DACu;
    // 0x411db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DB8u, 0x411DACu, 0x411DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411DB4u;
label_411db4:
    // 0x411db4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x411db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x411db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x411db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411dbc: 0x24a51b98  addiu       $a1, $a1, 0x1B98
    ctx->pc = 0x411dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7064));
    // 0x411dc0: 0xc11c766  jal         func_471D98
    ctx->pc = 0x411DC0u;
    SET_GPR_U32(ctx, 31, 0x411DC8u);
    ctx->pc = 0x411DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411DC0u;
    // 0x411dc4: 0xae4247e4  sw          $v0, 0x47E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 18404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x411DC0u, 0x411DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411DC8u;
label_411dc8:
    // 0x411dc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x411dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411dcc: 0xc12104a  jal         func_484128
    ctx->pc = 0x411DCCu;
    SET_GPR_U32(ctx, 31, 0x411DD4u);
    ctx->pc = 0x411DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411DCCu;
    // 0x411dd0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x411DCCu, 0x411DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411DD4u;
label_411dd4:
    // 0x411dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x411dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411dd8: 0x26083a00  addiu       $t0, $s0, 0x3A00
    ctx->pc = 0x411dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 14848));
    // 0x411ddc: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x411ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x411de0: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x411de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x411de4: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x411de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x411de8: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x411de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411dec: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x411decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411df0: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x411df0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x411df4: 0xc12fbb0  jal         func_4BEEC0
    ctx->pc = 0x411DF4u;
    SET_GPR_U32(ctx, 31, 0x411DFCu);
    ctx->pc = 0x411DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411DF4u;
    // 0x411df8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEEC0u, 0x411DF4u, 0x411DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411DFCu;
label_411dfc:
    // 0x411dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x411dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e00: 0xc11c754  jal         func_471D50
    ctx->pc = 0x411E00u;
    SET_GPR_U32(ctx, 31, 0x411E08u);
    ctx->pc = 0x411E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E00u;
    // 0x411e04: 0xae822150  sw          $v0, 0x2150($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D50u, 0x411E00u, 0x411E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E08u;
label_411e08:
    // 0x411e08: 0x8e4547e4  lw          $a1, 0x47E4($s2)
    ctx->pc = 0x411e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18404)));
    // 0x411e0c: 0xc11c766  jal         func_471D98
    ctx->pc = 0x411E0Cu;
    SET_GPR_U32(ctx, 31, 0x411E14u);
    ctx->pc = 0x411E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E0Cu;
    // 0x411e10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x411E0Cu, 0x411E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E14u;
label_411e14:
    // 0x411e14: 0xc12fbe8  jal         func_4BEFA0
    ctx->pc = 0x411E14u;
    SET_GPR_U32(ctx, 31, 0x411E1Cu);
    ctx->pc = 0x411E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E14u;
    // 0x411e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEFA0u, 0x411E14u, 0x411E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E1Cu;
label_411e1c:
    // 0x411e1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x411e20: 0x8c6247f4  lw          $v0, 0x47F4($v1)
    ctx->pc = 0x411e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5147F4u));
    // 0x411e24: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x411E24u;
    {
        const bool branch_taken_0x411e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E24u;
        // 0x411e28: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e24) {
            ctx->pc = 0x411E88u;
            goto label_411e88;
        }
    }
    ctx->pc = 0x411E2Cu;
    // 0x411e2c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x411e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x411e30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x411e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e34: 0x26105348  addiu       $s0, $s0, 0x5348
    ctx->pc = 0x411e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21320));
    // 0x411e38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x411e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e3c: 0xc104744  jal         func_411D10
    ctx->pc = 0x411E3Cu;
    SET_GPR_U32(ctx, 31, 0x411E44u);
    ctx->pc = 0x411E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E3Cu;
    // 0x411e40: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411D10u;
    goto label_411d10;
    ctx->pc = 0x411E44u;
label_411e44:
    // 0x411e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x411e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x411e48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x411E48u;
    {
        const bool branch_taken_0x411e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E48u;
        // 0x411e4c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e48) {
            ctx->pc = 0x411E84u;
            goto label_411e84;
        }
    }
    ctx->pc = 0x411E50u;
label_411e50:
    // 0x411e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x411e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e54: 0xc11c76e  jal         func_471DB8
    ctx->pc = 0x411E54u;
    SET_GPR_U32(ctx, 31, 0x411E5Cu);
    ctx->pc = 0x411E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E54u;
    // 0x411e58: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DB8u, 0x411E54u, 0x411E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E5Cu;
label_411e5c:
    // 0x411e5c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x411e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x411e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x411e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e64: 0x24a51b98  addiu       $a1, $a1, 0x1B98
    ctx->pc = 0x411e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7064));
    // 0x411e68: 0xc11c766  jal         func_471D98
    ctx->pc = 0x411E68u;
    SET_GPR_U32(ctx, 31, 0x411E70u);
    ctx->pc = 0x411E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E68u;
    // 0x411e6c: 0xae0247e4  sw          $v0, 0x47E4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 18404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x411E68u, 0x411E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E70u;
label_411e70:
    // 0x411e70: 0xc11c754  jal         func_471D50
    ctx->pc = 0x411E70u;
    SET_GPR_U32(ctx, 31, 0x411E78u);
    ctx->pc = 0x411E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E70u;
    // 0x411e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D50u, 0x411E70u, 0x411E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E78u;
label_411e78:
    // 0x411e78: 0x8e0547e4  lw          $a1, 0x47E4($s0)
    ctx->pc = 0x411e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18404)));
    // 0x411e7c: 0xc11c766  jal         func_471D98
    ctx->pc = 0x411E7Cu;
    SET_GPR_U32(ctx, 31, 0x411E84u);
    ctx->pc = 0x411E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E7Cu;
    // 0x411e80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x411E7Cu, 0x411E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E84u;
label_411e84:
    // 0x411e84: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x411e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_411e88:
    // 0x411e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x411e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x411e8c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x411e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x411e90: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x411e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x411e94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x411e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x411e98: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x411e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x411e9c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x411e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x411ea0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x411ea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x411ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x411ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x411EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411EA8u;
        // 0x411eac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411EB0u;
}
