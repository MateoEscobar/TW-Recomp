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

// Function: sub_00146B90
// Address: 0x146b90 - 0x147218
void sub_00146B90_0x146b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146B90_0x146b90");
#endif

    switch (ctx->pc) {
        case 0x146bc8u: goto label_146bc8;
        case 0x146bf8u: goto label_146bf8;
        case 0x146c80u: goto label_146c80;
        case 0x146cb0u: goto label_146cb0;
        case 0x146d38u: goto label_146d38;
        case 0x146d68u: goto label_146d68;
        case 0x146df0u: goto label_146df0;
        case 0x146e20u: goto label_146e20;
        case 0x146ea8u: goto label_146ea8;
        case 0x146ed8u: goto label_146ed8;
        case 0x146f60u: goto label_146f60;
        case 0x146f90u: goto label_146f90;
        case 0x147018u: goto label_147018;
        case 0x147048u: goto label_147048;
        case 0x1470d0u: goto label_1470d0;
        case 0x147100u: goto label_147100;
        case 0x147188u: goto label_147188;
        case 0x1471b8u: goto label_1471b8;
        default: break;
    }

    ctx->pc = 0x146b90u;

    // 0x146b90: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146b94: 0x2c420039  sltiu       $v0, $v0, 0x39
    ctx->pc = 0x146b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x146b98: 0x1040019d  beqz        $v0, . + 4 + (0x19D << 2)
    ctx->pc = 0x146B98u;
    {
        const bool branch_taken_0x146b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B98u;
        // 0x146b9c: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b98) {
            ctx->pc = 0x147210u;
            goto label_147210;
        }
    }
    ctx->pc = 0x146BA0u;
    // 0x146ba0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ba4: 0x8ce2b740  lw          $v0, -0x48C0($a3)
    ctx->pc = 0x146ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948672)));
    // 0x146ba8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x146BA8u;
    {
        const bool branch_taken_0x146ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BA8u;
        // 0x146bac: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ba8) {
            ctx->pc = 0x146C50u;
            goto label_146c50;
        }
    }
    ctx->pc = 0x146BB0u;
    // 0x146bb0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146bb4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x146bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bb8: 0x2442dd10  addiu       $v0, $v0, -0x22F0
    ctx->pc = 0x146bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
    // 0x146bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bc0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x146bc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bc4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x146bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_146bc8:
    // 0x146bc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146bcc: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x146BCCu;
    {
        const bool branch_taken_0x146bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146bcc) {
            ctx->pc = 0x146BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146BCCu;
            // 0x146bd0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146C38u;
            goto label_146c38;
        }
    }
    ctx->pc = 0x146BD4u;
    // 0x146bd4: 0x8d02b740  lw          $v0, -0x48C0($t0)
    ctx->pc = 0x146bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948672)));
    // 0x146bd8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bdc: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x146bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x146be0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146be4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146be8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146BE8u;
    {
        const bool branch_taken_0x146be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BE8u;
        // 0x146bec: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146be8) {
            ctx->pc = 0x146C28u;
            goto label_146c28;
        }
    }
    ctx->pc = 0x146BF0u;
    // 0x146bf0: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x146bf4: 0x0  nop
    ctx->pc = 0x146bf4u;
    // NOP
label_146bf8:
    // 0x146bf8: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x146bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x146bfc: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x146bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x146c00: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x146c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146c04: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x146c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146c08: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x146c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146c0c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146c10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146c14: 0x8ce2b740  lw          $v0, -0x48C0($a3)
    ctx->pc = 0x146c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948672)));
    // 0x146c18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146c1c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146c20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146C20u;
    {
        const bool branch_taken_0x146c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C20u;
        // 0x146c24: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c20) {
            ctx->pc = 0x146BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146bf8;
        }
    }
    ctx->pc = 0x146C28u;
label_146c28:
    // 0x146c28: 0x8d02b740  lw          $v0, -0x48C0($t0)
    ctx->pc = 0x146c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948672)));
    // 0x146c2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146c30: 0x3e00008  jr          $ra
    ctx->pc = 0x146C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C30u;
        // 0x146c34: 0xad02b740  sw          $v0, -0x48C0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146C38u;
label_146c38:
    // 0x146c38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146c3c: 0x8ce2b740  lw          $v0, -0x48C0($a3)
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948672)));
    // 0x146c40: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x146c44: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x146c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146c48: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146C48u;
    {
        const bool branch_taken_0x146c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C48u;
        // 0x146c4c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c48) {
            ctx->pc = 0x146BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146bc8;
        }
    }
    ctx->pc = 0x146C50u;
label_146c50:
    // 0x146c50: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x146c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x146c54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c58: 0x8ce2b744  lw          $v0, -0x48BC($a3)
    ctx->pc = 0x146c58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B744u));
    // 0x146c5c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x146C5Cu;
    {
        const bool branch_taken_0x146c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C5Cu;
        // 0x146c60: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c5c) {
            ctx->pc = 0x146D08u;
            goto label_146d08;
        }
    }
    ctx->pc = 0x146C64u;
    // 0x146c64: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146c68: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x146c68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c6c: 0x2442ddd0  addiu       $v0, $v0, -0x2230
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x146c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c74: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x146c74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c78: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x146c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146c7c: 0x0  nop
    ctx->pc = 0x146c7cu;
    // NOP
label_146c80:
    // 0x146c80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146c84: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x146C84u;
    {
        const bool branch_taken_0x146c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146c84) {
            ctx->pc = 0x146C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146C84u;
            // 0x146c88: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146CF0u;
            goto label_146cf0;
        }
    }
    ctx->pc = 0x146C8Cu;
    // 0x146c8c: 0x8d02b744  lw          $v0, -0x48BC($t0)
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948676)));
    // 0x146c90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c94: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x146c94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x146c98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146c9c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146ca0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146CA0u;
    {
        const bool branch_taken_0x146ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CA0u;
        // 0x146ca4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ca0) {
            ctx->pc = 0x146CE0u;
            goto label_146ce0;
        }
    }
    ctx->pc = 0x146CA8u;
    // 0x146ca8: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x146ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x146cac: 0x0  nop
    ctx->pc = 0x146cacu;
    // NOP
label_146cb0:
    // 0x146cb0: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x146cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x146cb4: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x146cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x146cb8: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x146cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146cbc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x146cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146cc0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x146cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146cc4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146cc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146ccc: 0x8ce2b744  lw          $v0, -0x48BC($a3)
    ctx->pc = 0x146cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948676)));
    // 0x146cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146cd4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146cd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146CD8u;
    {
        const bool branch_taken_0x146cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CD8u;
        // 0x146cdc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cd8) {
            ctx->pc = 0x146CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146cb0;
        }
    }
    ctx->pc = 0x146CE0u;
label_146ce0:
    // 0x146ce0: 0x8d02b744  lw          $v0, -0x48BC($t0)
    ctx->pc = 0x146ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948676)));
    // 0x146ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x146CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CE8u;
        // 0x146cec: 0xad02b744  sw          $v0, -0x48BC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146CF0u;
label_146cf0:
    // 0x146cf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146cf4: 0x8ce2b744  lw          $v0, -0x48BC($a3)
    ctx->pc = 0x146cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948676)));
    // 0x146cf8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x146cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x146cfc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x146cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146d00: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146D00u;
    {
        const bool branch_taken_0x146d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D00u;
        // 0x146d04: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d00) {
            ctx->pc = 0x146C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c80;
        }
    }
    ctx->pc = 0x146D08u;
label_146d08:
    // 0x146d08: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x146d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x146d0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d10: 0x8ce2b748  lw          $v0, -0x48B8($a3)
    ctx->pc = 0x146d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B748u));
    // 0x146d14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x146D14u;
    {
        const bool branch_taken_0x146d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D14u;
        // 0x146d18: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d14) {
            ctx->pc = 0x146DC0u;
            goto label_146dc0;
        }
    }
    ctx->pc = 0x146D1Cu;
    // 0x146d1c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146d20: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x146d20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d24: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x146d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x146d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d2c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x146d2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d30: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146d34: 0x0  nop
    ctx->pc = 0x146d34u;
    // NOP
label_146d38:
    // 0x146d38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146d3c: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x146D3Cu;
    {
        const bool branch_taken_0x146d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146d3c) {
            ctx->pc = 0x146D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146D3Cu;
            // 0x146d40: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146DA8u;
            goto label_146da8;
        }
    }
    ctx->pc = 0x146D44u;
    // 0x146d44: 0x8d02b748  lw          $v0, -0x48B8($t0)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948680)));
    // 0x146d48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d4c: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x146d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x146d50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146d54: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146d58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146D58u;
    {
        const bool branch_taken_0x146d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D58u;
        // 0x146d5c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d58) {
            ctx->pc = 0x146D98u;
            goto label_146d98;
        }
    }
    ctx->pc = 0x146D60u;
    // 0x146d60: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x146d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x146d64: 0x0  nop
    ctx->pc = 0x146d64u;
    // NOP
label_146d68:
    // 0x146d68: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x146d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x146d6c: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x146d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x146d70: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x146d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146d74: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x146d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146d78: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x146d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146d7c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146d80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146d84: 0x8ce2b748  lw          $v0, -0x48B8($a3)
    ctx->pc = 0x146d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948680)));
    // 0x146d88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146d8c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146d90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146D90u;
    {
        const bool branch_taken_0x146d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D90u;
        // 0x146d94: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d90) {
            ctx->pc = 0x146D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146d68;
        }
    }
    ctx->pc = 0x146D98u;
label_146d98:
    // 0x146d98: 0x8d02b748  lw          $v0, -0x48B8($t0)
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948680)));
    // 0x146d9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146da0: 0x3e00008  jr          $ra
    ctx->pc = 0x146DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DA0u;
        // 0x146da4: 0xad02b748  sw          $v0, -0x48B8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146DA8u;
label_146da8:
    // 0x146da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146dac: 0x8ce2b748  lw          $v0, -0x48B8($a3)
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948680)));
    // 0x146db0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x146db4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x146db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146db8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146DB8u;
    {
        const bool branch_taken_0x146db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DB8u;
        // 0x146dbc: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146db8) {
            ctx->pc = 0x146D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146d38;
        }
    }
    ctx->pc = 0x146DC0u;
label_146dc0:
    // 0x146dc0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x146dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x146dc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146dc8: 0x8ce2b74c  lw          $v0, -0x48B4($a3)
    ctx->pc = 0x146dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B74Cu));
    // 0x146dcc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x146DCCu;
    {
        const bool branch_taken_0x146dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DCCu;
        // 0x146dd0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dcc) {
            ctx->pc = 0x146E78u;
            goto label_146e78;
        }
    }
    ctx->pc = 0x146DD4u;
    // 0x146dd4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146dd8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x146dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ddc: 0x2442def0  addiu       $v0, $v0, -0x2110
    ctx->pc = 0x146ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x146de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146de4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x146de4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146de8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x146de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146dec: 0x0  nop
    ctx->pc = 0x146decu;
    // NOP
label_146df0:
    // 0x146df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146df4: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x146DF4u;
    {
        const bool branch_taken_0x146df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146df4) {
            ctx->pc = 0x146DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146DF4u;
            // 0x146df8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E60u;
            goto label_146e60;
        }
    }
    ctx->pc = 0x146DFCu;
    // 0x146dfc: 0x8d02b74c  lw          $v0, -0x48B4($t0)
    ctx->pc = 0x146dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948684)));
    // 0x146e00: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e04: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x146e04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x146e08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146e0c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146e10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146E10u;
    {
        const bool branch_taken_0x146e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E10u;
        // 0x146e14: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e10) {
            ctx->pc = 0x146E50u;
            goto label_146e50;
        }
    }
    ctx->pc = 0x146E18u;
    // 0x146e18: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x146e1c: 0x0  nop
    ctx->pc = 0x146e1cu;
    // NOP
label_146e20:
    // 0x146e20: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x146e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x146e24: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x146e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x146e28: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x146e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146e2c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x146e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146e30: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x146e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146e34: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146e38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146e3c: 0x8ce2b74c  lw          $v0, -0x48B4($a3)
    ctx->pc = 0x146e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948684)));
    // 0x146e40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146e44: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146e48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146E48u;
    {
        const bool branch_taken_0x146e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E48u;
        // 0x146e4c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e48) {
            ctx->pc = 0x146E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e20;
        }
    }
    ctx->pc = 0x146E50u;
label_146e50:
    // 0x146e50: 0x8d02b74c  lw          $v0, -0x48B4($t0)
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948684)));
    // 0x146e54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146e58: 0x3e00008  jr          $ra
    ctx->pc = 0x146E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E58u;
        // 0x146e5c: 0xad02b74c  sw          $v0, -0x48B4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146E60u;
label_146e60:
    // 0x146e60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146e64: 0x8ce2b74c  lw          $v0, -0x48B4($a3)
    ctx->pc = 0x146e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948684)));
    // 0x146e68: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x146e6c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x146e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146e70: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146E70u;
    {
        const bool branch_taken_0x146e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E70u;
        // 0x146e74: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e70) {
            ctx->pc = 0x146DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146df0;
        }
    }
    ctx->pc = 0x146E78u;
label_146e78:
    // 0x146e78: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x146e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x146e7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e80: 0x8ce2b750  lw          $v0, -0x48B0($a3)
    ctx->pc = 0x146e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B750u));
    // 0x146e84: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x146E84u;
    {
        const bool branch_taken_0x146e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E84u;
        // 0x146e88: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e84) {
            ctx->pc = 0x146F30u;
            goto label_146f30;
        }
    }
    ctx->pc = 0x146E8Cu;
    // 0x146e8c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146e90: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x146e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e94: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x146e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x146e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e9c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x146e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ea0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146ea4: 0x0  nop
    ctx->pc = 0x146ea4u;
    // NOP
label_146ea8:
    // 0x146ea8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146eac: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x146EACu;
    {
        const bool branch_taken_0x146eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146eac) {
            ctx->pc = 0x146EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146EACu;
            // 0x146eb0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146F18u;
            goto label_146f18;
        }
    }
    ctx->pc = 0x146EB4u;
    // 0x146eb4: 0x8d02b750  lw          $v0, -0x48B0($t0)
    ctx->pc = 0x146eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948688)));
    // 0x146eb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ebc: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x146ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x146ec0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146ec4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146ec8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146EC8u;
    {
        const bool branch_taken_0x146ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EC8u;
        // 0x146ecc: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ec8) {
            ctx->pc = 0x146F08u;
            goto label_146f08;
        }
    }
    ctx->pc = 0x146ED0u;
    // 0x146ed0: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x146ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x146ed4: 0x0  nop
    ctx->pc = 0x146ed4u;
    // NOP
label_146ed8:
    // 0x146ed8: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x146ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x146edc: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x146edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x146ee0: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146ee4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x146ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146ee8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x146ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146eec: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146ef0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146ef4: 0x8ce2b750  lw          $v0, -0x48B0($a3)
    ctx->pc = 0x146ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948688)));
    // 0x146ef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146efc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146f00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146F00u;
    {
        const bool branch_taken_0x146f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F00u;
        // 0x146f04: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f00) {
            ctx->pc = 0x146ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146ed8;
        }
    }
    ctx->pc = 0x146F08u;
label_146f08:
    // 0x146f08: 0x8d02b750  lw          $v0, -0x48B0($t0)
    ctx->pc = 0x146f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948688)));
    // 0x146f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146f10: 0x3e00008  jr          $ra
    ctx->pc = 0x146F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F10u;
        // 0x146f14: 0xad02b750  sw          $v0, -0x48B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F18u;
label_146f18:
    // 0x146f18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146f1c: 0x8ce2b750  lw          $v0, -0x48B0($a3)
    ctx->pc = 0x146f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948688)));
    // 0x146f20: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x146f24: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x146f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146f28: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146F28u;
    {
        const bool branch_taken_0x146f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F28u;
        // 0x146f2c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f28) {
            ctx->pc = 0x146EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146ea8;
        }
    }
    ctx->pc = 0x146F30u;
label_146f30:
    // 0x146f30: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x146f34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f38: 0x8ce2b754  lw          $v0, -0x48AC($a3)
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B754u));
    // 0x146f3c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x146F3Cu;
    {
        const bool branch_taken_0x146f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F3Cu;
        // 0x146f40: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f3c) {
            ctx->pc = 0x146FE8u;
            goto label_146fe8;
        }
    }
    ctx->pc = 0x146F44u;
    // 0x146f44: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146f48: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x146f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f4c: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x146f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f54: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x146f54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f58: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x146f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146f5c: 0x0  nop
    ctx->pc = 0x146f5cu;
    // NOP
label_146f60:
    // 0x146f60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146f64: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x146F64u;
    {
        const bool branch_taken_0x146f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146f64) {
            ctx->pc = 0x146F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146F64u;
            // 0x146f68: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146FD0u;
            goto label_146fd0;
        }
    }
    ctx->pc = 0x146F6Cu;
    // 0x146f6c: 0x8d02b754  lw          $v0, -0x48AC($t0)
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948692)));
    // 0x146f70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f74: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x146f74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x146f78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146f7c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146f80: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146F80u;
    {
        const bool branch_taken_0x146f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F80u;
        // 0x146f84: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f80) {
            ctx->pc = 0x146FC0u;
            goto label_146fc0;
        }
    }
    ctx->pc = 0x146F88u;
    // 0x146f88: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x146f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x146f8c: 0x0  nop
    ctx->pc = 0x146f8cu;
    // NOP
label_146f90:
    // 0x146f90: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x146f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x146f94: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x146f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x146f98: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x146f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146f9c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x146f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146fa0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x146fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146fa4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x146fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x146fa8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146fac: 0x8ce2b754  lw          $v0, -0x48AC($a3)
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948692)));
    // 0x146fb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146fb4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x146fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146fb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146FB8u;
    {
        const bool branch_taken_0x146fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FB8u;
        // 0x146fbc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fb8) {
            ctx->pc = 0x146F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146f90;
        }
    }
    ctx->pc = 0x146FC0u;
label_146fc0:
    // 0x146fc0: 0x8d02b754  lw          $v0, -0x48AC($t0)
    ctx->pc = 0x146fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948692)));
    // 0x146fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x146FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FC8u;
        // 0x146fcc: 0xad02b754  sw          $v0, -0x48AC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146FD0u;
label_146fd0:
    // 0x146fd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146fd4: 0x8ce2b754  lw          $v0, -0x48AC($a3)
    ctx->pc = 0x146fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948692)));
    // 0x146fd8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x146fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x146fdc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x146fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146fe0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146FE0u;
    {
        const bool branch_taken_0x146fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FE0u;
        // 0x146fe4: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fe0) {
            ctx->pc = 0x146F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146f60;
        }
    }
    ctx->pc = 0x146FE8u;
label_146fe8:
    // 0x146fe8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x146fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x146fec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146fecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ff0: 0x8ce2b758  lw          $v0, -0x48A8($a3)
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B758u));
    // 0x146ff4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x146FF4u;
    {
        const bool branch_taken_0x146ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FF4u;
        // 0x146ff8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ff4) {
            ctx->pc = 0x1470A0u;
            goto label_1470a0;
        }
    }
    ctx->pc = 0x146FFCu;
    // 0x146ffc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147000: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x147000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147004: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x147004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x147008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14700c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x14700cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147010: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x147010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147014: 0x0  nop
    ctx->pc = 0x147014u;
    // NOP
label_147018:
    // 0x147018: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14701c: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14701Cu;
    {
        const bool branch_taken_0x14701c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14701c) {
            ctx->pc = 0x147020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14701Cu;
            // 0x147020: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147088u;
            goto label_147088;
        }
    }
    ctx->pc = 0x147024u;
    // 0x147024: 0x8d02b758  lw          $v0, -0x48A8($t0)
    ctx->pc = 0x147024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948696)));
    // 0x147028: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x147028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14702c: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x14702cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x147030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147034: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x147034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147038: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x147038u;
    {
        const bool branch_taken_0x147038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147038u;
        // 0x14703c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147038) {
            ctx->pc = 0x147078u;
            goto label_147078;
        }
    }
    ctx->pc = 0x147040u;
    // 0x147040: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x147044: 0x0  nop
    ctx->pc = 0x147044u;
    // NOP
label_147048:
    // 0x147048: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x147048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14704c: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x14704cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x147050: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x147054: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x147054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147058: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x147058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14705c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x14705cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x147060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147064: 0x8ce2b758  lw          $v0, -0x48A8($a3)
    ctx->pc = 0x147064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948696)));
    // 0x147068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14706c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x14706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147070: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x147070u;
    {
        const bool branch_taken_0x147070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147070u;
        // 0x147074: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147070) {
            ctx->pc = 0x147048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147048;
        }
    }
    ctx->pc = 0x147078u;
label_147078:
    // 0x147078: 0x8d02b758  lw          $v0, -0x48A8($t0)
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948696)));
    // 0x14707c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147080: 0x3e00008  jr          $ra
    ctx->pc = 0x147080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147080u;
        // 0x147084: 0xad02b758  sw          $v0, -0x48A8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147088u;
label_147088:
    // 0x147088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14708c: 0x8ce2b758  lw          $v0, -0x48A8($a3)
    ctx->pc = 0x14708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948696)));
    // 0x147090: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x147090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x147094: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x147094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147098: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x147098u;
    {
        const bool branch_taken_0x147098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147098u;
        // 0x14709c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147098) {
            ctx->pc = 0x147018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147018;
        }
    }
    ctx->pc = 0x1470A0u;
label_1470a0:
    // 0x1470a0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1470a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1470a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470a8: 0x8ce2b75c  lw          $v0, -0x48A4($a3)
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B75Cu));
    // 0x1470ac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1470ACu;
    {
        const bool branch_taken_0x1470ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470ACu;
        // 0x1470b0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470ac) {
            ctx->pc = 0x147158u;
            goto label_147158;
        }
    }
    ctx->pc = 0x1470B4u;
    // 0x1470b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1470b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1470b8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1470b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470bc: 0x2442e070  addiu       $v0, $v0, -0x1F90
    ctx->pc = 0x1470bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x1470c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1470c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1470c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1470c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1470cc: 0x0  nop
    ctx->pc = 0x1470ccu;
    // NOP
label_1470d0:
    // 0x1470d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1470d4: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1470D4u;
    {
        const bool branch_taken_0x1470d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1470d4) {
            ctx->pc = 0x1470D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1470D4u;
            // 0x1470d8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147140u;
            goto label_147140;
        }
    }
    ctx->pc = 0x1470DCu;
    // 0x1470dc: 0x8d02b75c  lw          $v0, -0x48A4($t0)
    ctx->pc = 0x1470dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948700)));
    // 0x1470e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1470e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470e4: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x1470e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x1470e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1470e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1470ec: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1470ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1470f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1470F0u;
    {
        const bool branch_taken_0x1470f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470F0u;
        // 0x1470f4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470f0) {
            ctx->pc = 0x147130u;
            goto label_147130;
        }
    }
    ctx->pc = 0x1470F8u;
    // 0x1470f8: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x1470f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1470fc: 0x0  nop
    ctx->pc = 0x1470fcu;
    // NOP
label_147100:
    // 0x147100: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x147100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x147104: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x147104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x147108: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x147108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14710c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x14710cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147110: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x147110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147114: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x147114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x147118: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14711c: 0x8ce2b75c  lw          $v0, -0x48A4($a3)
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948700)));
    // 0x147120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147124: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x147124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147128: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x147128u;
    {
        const bool branch_taken_0x147128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147128u;
        // 0x14712c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147128) {
            ctx->pc = 0x147100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147100;
        }
    }
    ctx->pc = 0x147130u;
label_147130:
    // 0x147130: 0x8d02b75c  lw          $v0, -0x48A4($t0)
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948700)));
    // 0x147134: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147138: 0x3e00008  jr          $ra
    ctx->pc = 0x147138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147138u;
        // 0x14713c: 0xad02b75c  sw          $v0, -0x48A4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147140u;
label_147140:
    // 0x147140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147144: 0x8ce2b75c  lw          $v0, -0x48A4($a3)
    ctx->pc = 0x147144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948700)));
    // 0x147148: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x147148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x14714c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14714cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147150: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x147150u;
    {
        const bool branch_taken_0x147150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147150u;
        // 0x147154: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147150) {
            ctx->pc = 0x1470D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1470d0;
        }
    }
    ctx->pc = 0x147158u;
label_147158:
    // 0x147158: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x14715c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14715cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147160: 0x8ce2b760  lw          $v0, -0x48A0($a3)
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B760u));
    // 0x147164: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x147164u;
    {
        const bool branch_taken_0x147164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147164u;
        // 0x147168: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147164) {
            ctx->pc = 0x147210u;
            goto label_147210;
        }
    }
    ctx->pc = 0x14716Cu;
    // 0x14716c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147170: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x147170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147174: 0x2442e130  addiu       $v0, $v0, -0x1ED0
    ctx->pc = 0x147174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x147178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14717c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x14717cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147180: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147184: 0x0  nop
    ctx->pc = 0x147184u;
    // NOP
label_147188:
    // 0x147188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14718c: 0x5444001a  bnel        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14718Cu;
    {
        const bool branch_taken_0x14718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14718c) {
            ctx->pc = 0x147190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14718Cu;
            // 0x147190: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471F8u;
            goto label_1471f8;
        }
    }
    ctx->pc = 0x147194u;
    // 0x147194: 0x8d02b760  lw          $v0, -0x48A0($t0)
    ctx->pc = 0x147194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948704)));
    // 0x147198: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x147198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14719c: 0xa4a0fffc  sh          $zero, -0x4($a1)
    ctx->pc = 0x14719cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x1471a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1471a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1471a4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1471a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1471a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1471A8u;
    {
        const bool branch_taken_0x1471a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471a8) {
            ctx->pc = 0x1471E8u;
            goto label_1471e8;
        }
    }
    ctx->pc = 0x1471B0u;
    // 0x1471b0: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x1471b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1471b4: 0x0  nop
    ctx->pc = 0x1471b4u;
    // NOP
label_1471b8:
    // 0x1471b8: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x1471b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1471bc: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x1471bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1471c0: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1471c4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1471c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1471c8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1471c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1471cc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1471ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1471d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1471d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1471d4: 0x8ce2b760  lw          $v0, -0x48A0($a3)
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948704)));
    // 0x1471d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1471d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1471dc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1471dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1471e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1471E0u;
    {
        const bool branch_taken_0x1471e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1471E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E0u;
        // 0x1471e4: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e0) {
            ctx->pc = 0x1471B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1471b8;
        }
    }
    ctx->pc = 0x1471E8u;
label_1471e8:
    // 0x1471e8: 0x8d02b760  lw          $v0, -0x48A0($t0)
    ctx->pc = 0x1471e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948704)));
    // 0x1471ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1471ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1471f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1471F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1471F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471F0u;
        // 0x1471f4: 0xad02b760  sw          $v0, -0x48A0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1471F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1471F8u;
label_1471f8:
    // 0x1471f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1471f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1471fc: 0x8ce2b760  lw          $v0, -0x48A0($a3)
    ctx->pc = 0x1471fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948704)));
    // 0x147200: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x147200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x147204: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x147204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147208: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x147208u;
    {
        const bool branch_taken_0x147208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147208u;
        // 0x14720c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147208) {
            ctx->pc = 0x147188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147188;
        }
    }
    ctx->pc = 0x147210u;
label_147210:
    // 0x147210: 0x3e00008  jr          $ra
    ctx->pc = 0x147210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147218u;
}
