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

// Function: sub_00453B60
// Address: 0x453b60 - 0x454228
void sub_00453B60_0x453b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453B60_0x453b60");
#endif

    switch (ctx->pc) {
        case 0x453bf4u: goto label_453bf4;
        case 0x453e7cu: goto label_453e7c;
        case 0x453eacu: goto label_453eac;
        case 0x453ec8u: goto label_453ec8;
        case 0x453ed4u: goto label_453ed4;
        case 0x453ee0u: goto label_453ee0;
        case 0x4541c8u: goto label_4541c8;
        case 0x4541d8u: goto label_4541d8;
        case 0x4541f4u: goto label_4541f4;
        default: break;
    }

    ctx->pc = 0x453b60u;

    // 0x453b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x453b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x453b64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x453b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x453b68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x453b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x453b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x453b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x453b70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x453b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x453b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x453b78: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x453b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x453b7c: 0x8cc200e0  lw          $v0, 0xE0($a2)
    ctx->pc = 0x453b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x453b80: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x453B80u;
    {
        const bool branch_taken_0x453b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x453B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453B80u;
        // 0x453b84: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453b80) {
            ctx->pc = 0x453BD8u;
            goto label_453bd8;
        }
    }
    ctx->pc = 0x453B88u;
    // 0x453b88: 0x8cc400e4  lw          $a0, 0xE4($a2)
    ctx->pc = 0x453b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x453b8c: 0x24c500ec  addiu       $a1, $a2, 0xEC
    ctx->pc = 0x453b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 236));
    // 0x453b90: 0x8cc300e8  lw          $v1, 0xE8($a2)
    ctx->pc = 0x453b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 232)));
    // 0x453b94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x453b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453b98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x453b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x453b9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x453b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x453ba0: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x453ba0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x453ba4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x453ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x453ba8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x453ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x453bac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x453bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x453bb0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x453bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x453bb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x453bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x453bb8: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x453bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x453bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x453bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x453bc0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x453bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x453bc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x453bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x453bc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x453BC8u;
    {
        const bool branch_taken_0x453bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453bc8) {
            ctx->pc = 0x453BD8u;
            goto label_453bd8;
        }
    }
    ctx->pc = 0x453BD0u;
    // 0x453bd0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x453bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x453bd4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x453bd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_453bd8:
    // 0x453bd8: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x453BD8u;
    {
        const bool branch_taken_0x453bd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x453BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453BD8u;
        // 0x453bdc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453bd8) {
            ctx->pc = 0x453D78u;
            goto label_453d78;
        }
    }
    ctx->pc = 0x453BE0u;
    // 0x453be0: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x453be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x453be4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x453BE4u;
    {
        const bool branch_taken_0x453be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453BE4u;
        // 0x453be8: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453be4) {
            ctx->pc = 0x453BF8u;
            goto label_453bf8;
        }
    }
    ctx->pc = 0x453BECu;
    // 0x453bec: 0xc113b66  jal         func_44ED98
    ctx->pc = 0x453BECu;
    SET_GPR_U32(ctx, 31, 0x453BF4u);
    ctx->pc = 0x453BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453BECu;
    // 0x453bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ED98u, 0x453BECu, 0x453BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453BF4u;
label_453bf4:
    // 0x453bf4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x453bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_453bf8:
    // 0x453bf8: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x453bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x453bfc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x453BFCu;
    {
        const bool branch_taken_0x453bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453bfc) {
            ctx->pc = 0x453C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453BFCu;
            // 0x453c00: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x453C3Cu;
            goto label_453c3c;
        }
    }
    ctx->pc = 0x453C04u;
    // 0x453c04: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x453c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x453c08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x453c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x453c0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x453C0Cu;
    {
        const bool branch_taken_0x453c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453C0Cu;
        // 0x453c10: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453c0c) {
            ctx->pc = 0x453C3Cu;
            goto label_453c3c;
        }
    }
    ctx->pc = 0x453C14u;
    // 0x453c14: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x453c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x453c18: 0x6a030097  ldl         $v1, 0x97($s0)
    ctx->pc = 0x453c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x453c1c: 0x6e030090  ldr         $v1, 0x90($s0)
    ctx->pc = 0x453c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x453c20: 0x6a04009f  ldl         $a0, 0x9F($s0)
    ctx->pc = 0x453c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x453c24: 0x6e040098  ldr         $a0, 0x98($s0)
    ctx->pc = 0x453c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x453c28: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x453c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c2c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x453c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c30: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x453c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c34: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x453c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c38: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x453c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_453c3c:
    // 0x453c3c: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x453c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x453c40: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x453C40u;
    {
        const bool branch_taken_0x453c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453C40u;
        // 0x453c44: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x453c40) {
            ctx->pc = 0x453CA0u;
            goto label_453ca0;
        }
    }
    ctx->pc = 0x453C48u;
    // 0x453c48: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x453c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x453c4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x453c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x453c50: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x453C50u;
    {
        const bool branch_taken_0x453c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453C50u;
        // 0x453c54: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x453c50) {
            ctx->pc = 0x453CA0u;
            goto label_453ca0;
        }
    }
    ctx->pc = 0x453C58u;
    // 0x453c58: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x453c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x453c5c: 0x6a030097  ldl         $v1, 0x97($s0)
    ctx->pc = 0x453c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x453c60: 0x6e030090  ldr         $v1, 0x90($s0)
    ctx->pc = 0x453c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x453c64: 0x6a04009f  ldl         $a0, 0x9F($s0)
    ctx->pc = 0x453c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x453c68: 0x6e040098  ldr         $a0, 0x98($s0)
    ctx->pc = 0x453c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x453c6c: 0x6a0500a7  ldl         $a1, 0xA7($s0)
    ctx->pc = 0x453c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x453c70: 0x6e0500a0  ldr         $a1, 0xA0($s0)
    ctx->pc = 0x453c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x453c74: 0x6a0600af  ldl         $a2, 0xAF($s0)
    ctx->pc = 0x453c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x453c78: 0x6e0600a8  ldr         $a2, 0xA8($s0)
    ctx->pc = 0x453c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x453c7c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x453c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c80: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x453c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c84: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x453c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c88: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x453c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c8c: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x453c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c90: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x453c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c94: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x453c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c98: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x453c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453c9c: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x453c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_453ca0:
    // 0x453ca0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x453CA0u;
    {
        const bool branch_taken_0x453ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453CA0u;
        // 0x453ca4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453ca0) {
            ctx->pc = 0x453CD0u;
            goto label_453cd0;
        }
    }
    ctx->pc = 0x453CA8u;
    // 0x453ca8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x453ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x453cac: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x453cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x453cb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x453cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x453cb4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x453CB4u;
    {
        const bool branch_taken_0x453cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x453CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453CB4u;
        // 0x453cb8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453cb4) {
            ctx->pc = 0x453CD4u;
            goto label_453cd4;
        }
    }
    ctx->pc = 0x453CBCu;
    // 0x453cbc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x453cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x453cc0: 0x8a03007f  lwl         $v1, 0x7F($s0)
    ctx->pc = 0x453cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x453cc4: 0x9a03007c  lwr         $v1, 0x7C($s0)
    ctx->pc = 0x453cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x453cc8: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x453cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x453ccc: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x453cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_453cd0:
    // 0x453cd0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x453cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_453cd4:
    // 0x453cd4: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x453cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x453cd8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x453CD8u;
    {
        const bool branch_taken_0x453cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453cd8) {
            ctx->pc = 0x453CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453CD8u;
            // 0x453cdc: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x453D18u;
            goto label_453d18;
        }
    }
    ctx->pc = 0x453CE0u;
    // 0x453ce0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x453ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x453ce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x453ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x453ce8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x453CE8u;
    {
        const bool branch_taken_0x453ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453CE8u;
        // 0x453cec: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453ce8) {
            ctx->pc = 0x453D18u;
            goto label_453d18;
        }
    }
    ctx->pc = 0x453CF0u;
    // 0x453cf0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x453cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x453cf4: 0x6a030087  ldl         $v1, 0x87($s0)
    ctx->pc = 0x453cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x453cf8: 0x6e030080  ldr         $v1, 0x80($s0)
    ctx->pc = 0x453cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x453cfc: 0x6a04008f  ldl         $a0, 0x8F($s0)
    ctx->pc = 0x453cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x453d00: 0x6e040088  ldr         $a0, 0x88($s0)
    ctx->pc = 0x453d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x453d04: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x453d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453d08: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x453d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453d0c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x453d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453d10: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x453d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453d14: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x453d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_453d18:
    // 0x453d18: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x453d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x453d1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x453D1Cu;
    {
        const bool branch_taken_0x453d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453D1Cu;
        // 0x453d20: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x453d1c) {
            ctx->pc = 0x453D4Cu;
            goto label_453d4c;
        }
    }
    ctx->pc = 0x453D24u;
    // 0x453d24: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x453d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x453d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x453d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x453d2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x453D2Cu;
    {
        const bool branch_taken_0x453d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453D2Cu;
        // 0x453d30: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x453d2c) {
            ctx->pc = 0x453D4Cu;
            goto label_453d4c;
        }
    }
    ctx->pc = 0x453D34u;
    // 0x453d34: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x453d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x453d38: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x453d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453d3c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x453d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x453d40: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x453d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453d44: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x453d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x453d48: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x453d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
label_453d4c:
    // 0x453d4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x453D4Cu;
    {
        const bool branch_taken_0x453d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453d4c) {
            ctx->pc = 0x453D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453D4Cu;
            // 0x453d50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x453D7Cu;
            goto label_453d7c;
        }
    }
    ctx->pc = 0x453D54u;
    // 0x453d54: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x453d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x453d58: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x453d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x453d5c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x453D5Cu;
    {
        const bool branch_taken_0x453d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453d5c) {
            ctx->pc = 0x453D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453D5Cu;
            // 0x453d60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x453D7Cu;
            goto label_453d7c;
        }
    }
    ctx->pc = 0x453D64u;
    // 0x453d64: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x453d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x453d68: 0x6a030077  ldl         $v1, 0x77($s0)
    ctx->pc = 0x453d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x453d6c: 0x6e030070  ldr         $v1, 0x70($s0)
    ctx->pc = 0x453d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x453d70: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x453d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453d74: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x453d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_453d78:
    // 0x453d78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x453d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_453d7c:
    // 0x453d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x453d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x453d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x453d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x453d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453d88: 0x3e00008  jr          $ra
    ctx->pc = 0x453D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453D88u;
        // 0x453d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453D90u;
    // 0x453d90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x453d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x453d94: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x453d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x453d98: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x453d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x453d9c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x453d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x453da0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x453da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x453da4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x453da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x453da8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x453da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x453dac: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x453dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x453db0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x453db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x453db4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x453db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x453db8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x453db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x453dbc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x453dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x453dc0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x453dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x453dc4: 0x8c73ad18  lw          $s3, -0x52E8($v1)
    ctx->pc = 0x453dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x70AD18u));
    // 0x453dc8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x453dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x453dcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x453dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453dd0: 0x8e760060  lw          $s6, 0x60($s3)
    ctx->pc = 0x453dd0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x453dd4: 0x24710050  addiu       $s1, $v1, 0x50
    ctx->pc = 0x453dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x453dd8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x453dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x453ddc: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x453ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x453de0: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x453de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x453de4: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x453de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x453de8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x453de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x453dec: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x453decu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x453df0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x453DF0u;
    {
        const bool branch_taken_0x453df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453df0) {
            ctx->pc = 0x453DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453DF0u;
            // 0x453df4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x453DF8u;
            goto label_453df8;
        }
    }
    ctx->pc = 0x453DF8u;
label_453df8:
    // 0x453df8: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x453df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x453dfc: 0xa812  mflo        $s5
    ctx->pc = 0x453dfcu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x453e00: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x453e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x453e04: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x453E04u;
    {
        const bool branch_taken_0x453e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x453E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453E04u;
        // 0x453e08: 0xa2b823  subu        $s7, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453e04) {
            ctx->pc = 0x453E74u;
            goto label_453e74;
        }
    }
    ctx->pc = 0x453E0Cu;
    // 0x453e0c: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x453e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x453e10: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x453e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x453e14: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x453e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x453e18: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x453e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x453e1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x453e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x453e20: 0x2e52825  or          $a1, $s7, $a1
    ctx->pc = 0x453e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 5));
    // 0x453e24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x453e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x453e28: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x453e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x453e2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x453e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x453e30: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x453e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x453e34: 0x8e0400fc  lw          $a0, 0xFC($s0)
    ctx->pc = 0x453e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x453e38: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x453e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x453e3c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x453e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x453e40: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x453e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x453e44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x453e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x453e48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x453e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x453e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x453e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x453e50: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x453e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x453e54: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x453e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x453e58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x453e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x453e5c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x453e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x453e60: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x453e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x453e64: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x453e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x453e68: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x453e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x453e6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x453e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x453e70: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x453e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_453e74:
    // 0x453e74: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x453E74u;
    SET_GPR_U32(ctx, 31, 0x453E7Cu);
    ctx->pc = 0x453E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453E74u;
    // 0x453e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x453E74u, 0x453E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E7Cu;
label_453e7c:
    // 0x453e7c: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x453e7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x453e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x453e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x453e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453e8c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x453e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x453e90: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x453e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x453e94: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x453e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x453e98: 0x7a630040  lq          $v1, 0x40($s3)
    ctx->pc = 0x453e98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x453e9c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x453e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x453ea0: 0x7a620050  lq          $v0, 0x50($s3)
    ctx->pc = 0x453ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x453ea4: 0xc127e32  jal         func_49F8C8
    ctx->pc = 0x453EA4u;
    SET_GPR_U32(ctx, 31, 0x453EACu);
    ctx->pc = 0x453EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453EA4u;
    // 0x453ea8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F8C8u, 0x453EA4u, 0x453EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EACu;
label_453eac:
    // 0x453eac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x453eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x453eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x453eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453eb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x453eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x453eb8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x453eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453ebc: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x453ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x453ec0: 0xc114438  jal         func_4510E0
    ctx->pc = 0x453EC0u;
    SET_GPR_U32(ctx, 31, 0x453EC8u);
    ctx->pc = 0x453EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453EC0u;
    // 0x453ec4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4510E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4510E0u, 0x453EC0u, 0x453EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EC8u;
label_453ec8:
    // 0x453ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x453ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453ecc: 0xc114462  jal         func_451188
    ctx->pc = 0x453ECCu;
    SET_GPR_U32(ctx, 31, 0x453ED4u);
    ctx->pc = 0x453ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453ECCu;
    // 0x453ed0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x451188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451188u, 0x453ECCu, 0x453ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453ED4u;
label_453ed4:
    // 0x453ed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x453ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453ed8: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x453ED8u;
    SET_GPR_U32(ctx, 31, 0x453EE0u);
    ctx->pc = 0x453EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453ED8u;
    // 0x453edc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x453ED8u, 0x453EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EE0u;
label_453ee0:
    // 0x453ee0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x453EE0u;
    {
        const bool branch_taken_0x453ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x453EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453EE0u;
        // 0x453ee4: 0x8f86898c  lw          $a2, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453ee0) {
            ctx->pc = 0x453EF0u;
            goto label_453ef0;
        }
    }
    ctx->pc = 0x453EE8u;
    // 0x453ee8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x453EE8u;
    {
        const bool branch_taken_0x453ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453EE8u;
        // 0x453eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453ee8) {
            ctx->pc = 0x4541F8u;
            goto label_4541f8;
        }
    }
    ctx->pc = 0x453EF0u;
label_453ef0:
    // 0x453ef0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x453ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x453ef4: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x453ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x453ef8: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x453ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x453efc: 0x344203eb  ori         $v0, $v0, 0x3EB
    ctx->pc = 0x453efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1003);
    // 0x453f00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x453f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x453f04: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x453f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x453f08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x453f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x453f0c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x453f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x453f10: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x453f10u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x453f14: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x453f14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x453f18: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x453f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x453f1c: 0x920200f4  lbu         $v0, 0xF4($s0)
    ctx->pc = 0x453f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x453f20: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x453f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x453f24: 0x920300f5  lbu         $v1, 0xF5($s0)
    ctx->pc = 0x453f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 245)));
    // 0x453f28: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x453f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x453f2c: 0x920200f6  lbu         $v0, 0xF6($s0)
    ctx->pc = 0x453f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    // 0x453f30: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x453f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x453f34: 0x920300f7  lbu         $v1, 0xF7($s0)
    ctx->pc = 0x453f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x453f38: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x453f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x453f3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x453f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x453f40: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x453f40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x453f44: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x453f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x453f48: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x453f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453f4c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x453f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x453f50: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x453f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453f54: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x453f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x453f58: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x453f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453f5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x453f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x453f60: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x453f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x453f64: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x453f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453f68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x453f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x453f6c: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x453f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x453f70: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x453f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x453f74: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x453f74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x453f78: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x453f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x453f7c: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x453f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x453f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x453f84: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x453f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x453f88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x453f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x453f8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x453f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x453f90: 0xc6610070  lwc1        $f1, 0x70($s3)
    ctx->pc = 0x453f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453f94: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x453f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x453f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x453f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x453f9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x453f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x453fa0: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x453fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453fa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x453fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x453fa8: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x453fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453fac: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x453facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x453fb0: 0xafb7004c  sw          $s7, 0x4C($sp)
    ctx->pc = 0x453fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 23));
    // 0x453fb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x453fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x453fb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x453fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x453fbc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x453fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x453fc0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x453fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x453fc4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x453fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x453fc8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x453fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x453fcc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x453fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x453fd0: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x453fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x453fd4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x453fd4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7D0u));
    // 0x453fd8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x453fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x453fdc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x453fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x453fe0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x453fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x453fe4: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x453fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
    // 0x453fe8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x453fe8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7E0u));
    // 0x453fec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x453fecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x453ff0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x453ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x453ff4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x453ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453ff8: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x453ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x453ffc: 0x344203fa  ori         $v0, $v0, 0x3FA
    ctx->pc = 0x453ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1018);
    // 0x454000: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x454000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x454004: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x454004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x454008: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x454008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x45400c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x45400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x454010: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x454010u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x454014: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x454014u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x454018: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x454018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x45401c: 0x8e0400fc  lw          $a0, 0xFC($s0)
    ctx->pc = 0x45401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x454020: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x454020u;
    {
        const bool branch_taken_0x454020 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x454024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454020u;
        // 0x454024: 0xdc830000  ld          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454020) {
            ctx->pc = 0x454038u;
            goto label_454038;
        }
    }
    ctx->pc = 0x454028u;
    // 0x454028: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x454028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x45402c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x45402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x454030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x454030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x454034: 0x0  nop
    ctx->pc = 0x454034u;
    // NOP
label_454038:
    // 0x454038: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x454038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x45403c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x45403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x454040: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x454040u;
    {
        const bool branch_taken_0x454040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454040) {
            ctx->pc = 0x454044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454040u;
            // 0x454044: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454058u;
            goto label_454058;
        }
    }
    ctx->pc = 0x454048u;
    // 0x454048: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x454048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x45404c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x45404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x454050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x454050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x454054: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x454054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_454058:
    // 0x454058: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x454058u;
    {
        const bool branch_taken_0x454058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454058) {
            ctx->pc = 0x45405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454058u;
            // 0x45405c: 0xdc820008  ld          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454070u;
            goto label_454070;
        }
    }
    ctx->pc = 0x454060u;
    // 0x454060: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x454060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x454064: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x454064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
    // 0x454068: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x454068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x45406c: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x45406cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_454070:
    // 0x454070: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x454070u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x454074: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x454074u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x454078: 0xc7848030  lwc1        $f4, -0x7FD0($gp)
    ctx->pc = 0x454078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45407c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x45407Cu;
    {
        const bool branch_taken_0x45407c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x454080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45407Cu;
        // 0x454080: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45407c) {
            ctx->pc = 0x454088u;
            goto label_454088;
        }
    }
    ctx->pc = 0x454084u;
    // 0x454084: 0xc7848034  lwc1        $f4, -0x7FCC($gp)
    ctx->pc = 0x454084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_454088:
    // 0x454088: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x454088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x45408c: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x45408cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x454090: 0xc7868038  lwc1        $f6, -0x7FC8($gp)
    ctx->pc = 0x454090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x454094: 0x92450007  lbu         $a1, 0x7($s2)
    ctx->pc = 0x454094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x454098: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x454098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x45409c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x45409cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4540a0: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x4540a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x4540a4: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x4540a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x4540a8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4540a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4540ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4540acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4540b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4540b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4540b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4540b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4540b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4540b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4540bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4540bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4540c0: 0x46061142  mul.s       $f5, $f2, $f6
    ctx->pc = 0x4540c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x4540c4: 0x460409c2  mul.s       $f7, $f1, $f4
    ctx->pc = 0x4540c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4540c8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x4540c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4540cc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x4540ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4540d0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x4540d0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x4540d4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x4540d4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x4540d8: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x4540d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4540dc: 0x460419c2  mul.s       $f7, $f3, $f4
    ctx->pc = 0x4540dcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4540e0: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x4540e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4540e4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x4540e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4540e8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4540e8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4540ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4540ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4540f0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x4540f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4540f4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4540f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4540f8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4540f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4540fc: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x4540fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x454100: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x454100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x454104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x454104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454108: 0x70821b89  pcpyld      $v1, $a0, $v0
    ctx->pc = 0x454108u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x45410c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x45410cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x454110: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x454110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x454114: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x454114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x454118: 0x34638005  ori         $v1, $v1, 0x8005
    ctx->pc = 0x454118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x45411c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x45411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x454120: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x454120u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x454124: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x454124u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x454128: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x454128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x45412c: 0xde0200b8  ld          $v0, 0xB8($s0)
    ctx->pc = 0x45412cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x454130: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x454130u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x454134: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x454134u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    // 0x454138: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x454138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x45413c: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x45413cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x454140: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x454140u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x454144: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x454144u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x454148: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x454148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x45414c: 0xde0200c8  ld          $v0, 0xC8($s0)
    ctx->pc = 0x45414cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x454150: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x454150u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x454154: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x454154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
    // 0x454158: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x454158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x45415c: 0xde0200d0  ld          $v0, 0xD0($s0)
    ctx->pc = 0x45415cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x454160: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x454160u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x454164: 0x7cc30060  sq          $v1, 0x60($a2)
    ctx->pc = 0x454164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 3));
    // 0x454168: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x454168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x45416c: 0xdf8286e8  ld          $v0, -0x7918($gp)
    ctx->pc = 0x45416cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x454170: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x454170u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x454174: 0x7cc30070  sq          $v1, 0x70($a2)
    ctx->pc = 0x454174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 3));
    // 0x454178: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x454178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x45417c: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x45417cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x454180: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x454180u;
    {
        const bool branch_taken_0x454180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x454184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454180u;
        // 0x454184: 0x24c50080  addiu       $a1, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454180) {
            ctx->pc = 0x4541A8u;
            goto label_4541a8;
        }
    }
    ctx->pc = 0x454188u;
    // 0x454188: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x454188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x45418c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x45418cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x454190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x454190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x454194: 0xaf848784  sw          $a0, -0x787C($gp)
    ctx->pc = 0x454194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 4));
    // 0x454198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x454198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45419c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x45419cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4541a0: 0x7cc30080  sq          $v1, 0x80($a2)
    ctx->pc = 0x4541a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 3));
    // 0x4541a4: 0x24c50090  addiu       $a1, $a2, 0x90
    ctx->pc = 0x4541a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_4541a8:
    // 0x4541a8: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x4541a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x4541ac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4541acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x4541b0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4541b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4541b4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4541b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4541b8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4541b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4541bc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4541bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4541c0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4541C0u;
    SET_GPR_U32(ctx, 31, 0x4541C8u);
    ctx->pc = 0x4541C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4541C0u;
    // 0x4541c4: 0xaf85898c  sw          $a1, -0x7674($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4541C0u, 0x4541C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541C8u;
label_4541c8:
    // 0x4541c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4541c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4541cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4541ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4541d0: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4541D0u;
    SET_GPR_U32(ctx, 31, 0x4541D8u);
    ctx->pc = 0x4541D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4541D0u;
    // 0x4541d4: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4541D0u, 0x4541D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541D8u;
label_4541d8:
    // 0x4541d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4541d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4541dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4541dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4541e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4541e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4541e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4541E4u;
    {
        const bool branch_taken_0x4541e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4541E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4541E4u;
        // 0x4541e8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4541e4) {
            ctx->pc = 0x4541F8u;
            goto label_4541f8;
        }
    }
    ctx->pc = 0x4541ECu;
    // 0x4541ec: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x4541ECu;
    SET_GPR_U32(ctx, 31, 0x4541F4u);
    ctx->pc = 0x4541F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4541ECu;
    // 0x4541f0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x4541ECu, 0x4541F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541F4u;
label_4541f4:
    // 0x4541f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4541f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4541f8:
    // 0x4541f8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4541f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4541fc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4541fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x454200: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x454200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x454204: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x454204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x454208: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x454208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45420c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x45420cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x454210: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x454210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x454214: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x454214u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x454218: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x454218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45421c: 0x3e00008  jr          $ra
    ctx->pc = 0x45421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45421Cu;
        // 0x454220: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45421Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454224u;
    // 0x454224: 0x0  nop
    ctx->pc = 0x454224u;
    // NOP
    ctx->pc = 0x454228u;
}
