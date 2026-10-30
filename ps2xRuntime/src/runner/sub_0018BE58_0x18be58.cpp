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

// Function: sub_0018BE58
// Address: 0x18be58 - 0x18bf68
void sub_0018BE58_0x18be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BE58_0x18be58");
#endif

    switch (ctx->pc) {
        case 0x18be58u: goto label_18be58;
        case 0x18be5cu: goto label_18be5c;
        case 0x18be60u: goto label_18be60;
        case 0x18be64u: goto label_18be64;
        case 0x18be68u: goto label_18be68;
        case 0x18be6cu: goto label_18be6c;
        case 0x18be70u: goto label_18be70;
        case 0x18be74u: goto label_18be74;
        case 0x18be78u: goto label_18be78;
        case 0x18be7cu: goto label_18be7c;
        case 0x18be80u: goto label_18be80;
        case 0x18be84u: goto label_18be84;
        case 0x18be88u: goto label_18be88;
        case 0x18be8cu: goto label_18be8c;
        case 0x18be90u: goto label_18be90;
        case 0x18be94u: goto label_18be94;
        case 0x18be98u: goto label_18be98;
        case 0x18be9cu: goto label_18be9c;
        case 0x18bea0u: goto label_18bea0;
        case 0x18bea4u: goto label_18bea4;
        case 0x18bea8u: goto label_18bea8;
        case 0x18beacu: goto label_18beac;
        case 0x18beb0u: goto label_18beb0;
        case 0x18beb4u: goto label_18beb4;
        case 0x18beb8u: goto label_18beb8;
        case 0x18bebcu: goto label_18bebc;
        case 0x18bec0u: goto label_18bec0;
        case 0x18bec4u: goto label_18bec4;
        case 0x18bec8u: goto label_18bec8;
        case 0x18beccu: goto label_18becc;
        case 0x18bed0u: goto label_18bed0;
        case 0x18bed4u: goto label_18bed4;
        case 0x18bed8u: goto label_18bed8;
        case 0x18bedcu: goto label_18bedc;
        case 0x18bee0u: goto label_18bee0;
        case 0x18bee4u: goto label_18bee4;
        case 0x18bee8u: goto label_18bee8;
        case 0x18beecu: goto label_18beec;
        case 0x18bef0u: goto label_18bef0;
        case 0x18bef4u: goto label_18bef4;
        case 0x18bef8u: goto label_18bef8;
        case 0x18befcu: goto label_18befc;
        case 0x18bf00u: goto label_18bf00;
        case 0x18bf04u: goto label_18bf04;
        case 0x18bf08u: goto label_18bf08;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf10u: goto label_18bf10;
        case 0x18bf14u: goto label_18bf14;
        case 0x18bf18u: goto label_18bf18;
        case 0x18bf1cu: goto label_18bf1c;
        case 0x18bf20u: goto label_18bf20;
        case 0x18bf24u: goto label_18bf24;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf2cu: goto label_18bf2c;
        case 0x18bf30u: goto label_18bf30;
        case 0x18bf34u: goto label_18bf34;
        case 0x18bf38u: goto label_18bf38;
        case 0x18bf3cu: goto label_18bf3c;
        case 0x18bf40u: goto label_18bf40;
        case 0x18bf44u: goto label_18bf44;
        case 0x18bf48u: goto label_18bf48;
        case 0x18bf4cu: goto label_18bf4c;
        case 0x18bf50u: goto label_18bf50;
        case 0x18bf54u: goto label_18bf54;
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf5cu: goto label_18bf5c;
        case 0x18bf60u: goto label_18bf60;
        case 0x18bf64u: goto label_18bf64;
        default: break;
    }

    ctx->pc = 0x18be58u;

label_18be58:
    // 0x18be58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18be58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18be5c:
    // 0x18be5c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_18be60:
    // 0x18be60: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_18be64:
    // 0x18be64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18be64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18be68:
    // 0x18be68: 0x9202df24  lbu         $v0, -0x20DC($s0)
    ctx->pc = 0x18be68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958884)));
label_18be6c:
    // 0x18be6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18be6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18be70:
    // 0x18be70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18be70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_18be74:
    // 0x18be74: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18be74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_18be78:
    // 0x18be78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18be78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18be7c:
    // 0x18be7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_18be80:
    // 0x18be80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18be80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18be84:
    // 0x18be84: 0x2c420019  sltiu       $v0, $v0, 0x19
    ctx->pc = 0x18be84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_18be88:
    // 0x18be88: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_18be8c:
    if (ctx->pc == 0x18BE8Cu) {
        ctx->pc = 0x18BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE88u;
        // 0x18be8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE90u;
        goto label_18be90;
    }
    ctx->pc = 0x18BE88u;
    {
        const bool branch_taken_0x18be88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE88u;
        // 0x18be8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be88) {
            ctx->pc = 0x18BF48u;
            goto label_18bf48;
        }
    }
    ctx->pc = 0x18BE90u;
label_18be90:
    // 0x18be90: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x18be90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_18be94:
    // 0x18be94: 0x9203df24  lbu         $v1, -0x20DC($s0)
    ctx->pc = 0x18be94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958884)));
label_18be98:
    // 0x18be98: 0x8c8727e4  lw          $a3, 0x27E4($a0)
    ctx->pc = 0x18be98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_18be9c:
    // 0x18be9c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18bea0:
    // 0x18bea0: 0x2442dec0  addiu       $v0, $v0, -0x2140
    ctx->pc = 0x18bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_18bea4:
    // 0x18bea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18bea8:
    // 0x18bea8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x18bea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_18beac:
    // 0x18beac: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x18beacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18beb0:
    // 0x18beb0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18beb4:
    // 0x18beb4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18beb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18beb8:
    // 0x18beb8: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x18beb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_18bebc:
    // 0x18bebc: 0x24a52f58  addiu       $a1, $a1, 0x2F58
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12120));
label_18bec0:
    // 0x18bec0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_18bec4:
    // 0x18bec4: 0x25082ef0  addiu       $t0, $t0, 0x2EF0
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12016));
label_18bec8:
    // 0x18bec8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_18becc:
    // 0x18becc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18bed0:
    // 0x18bed0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18bed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18bed4:
    // 0x18bed4: 0x24090178  addiu       $t1, $zero, 0x178
    ctx->pc = 0x18bed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_18bed8:
    // 0x18bed8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18bed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bedc:
    // 0x18bedc: 0x40f809  jalr        $v0
label_18bee0:
    if (ctx->pc == 0x18BEE0u) {
        ctx->pc = 0x18BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEDCu;
        // 0x18bee0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BEE4u;
        goto label_18bee4;
    }
    ctx->pc = 0x18BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BEE4u);
        ctx->pc = 0x18BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEDCu;
        // 0x18bee0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BEDCu, 0x18BEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BEE4u;
label_18bee4:
    // 0x18bee4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18bee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bee8:
    // 0x18bee8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_18beec:
    if (ctx->pc == 0x18BEECu) {
        ctx->pc = 0x18BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEE8u;
        // 0x18beec: 0x9202df24  lbu         $v0, -0x20DC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958884)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BEF0u;
        goto label_18bef0;
    }
    ctx->pc = 0x18BEE8u;
    {
        const bool branch_taken_0x18bee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEE8u;
        // 0x18beec: 0x9202df24  lbu         $v0, -0x20DC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bee8) {
            ctx->pc = 0x18BF3Cu;
            goto label_18bf3c;
        }
    }
    ctx->pc = 0x18BEF0u;
label_18bef0:
    // 0x18bef0: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x18bef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18bef4:
    // 0x18bef4: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x18bef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18bef8:
    // 0x18bef8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_18befc:
    // 0x18befc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x18befcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18bf00:
    // 0x18bf00: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x18bf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18bf04:
    // 0x18bf04: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x18bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_18bf08:
    // 0x18bf08: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x18bf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18bf0c:
    // 0x18bf0c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x18bf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18bf10:
    // 0x18bf10: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x18bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_18bf14:
    // 0x18bf14: 0xb0620013  sdl         $v0, 0x13($v1)
    ctx->pc = 0x18bf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18bf18:
    // 0x18bf18: 0xb462000c  sdr         $v0, 0xC($v1)
    ctx->pc = 0x18bf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18bf1c:
    // 0x18bf1c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x18bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_18bf20:
    // 0x18bf20: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x18bf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18bf24:
    // 0x18bf24: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x18bf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18bf28:
    // 0x18bf28: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18bf2c:
    // 0x18bf2c: 0xb062001f  sdl         $v0, 0x1F($v1)
    ctx->pc = 0x18bf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18bf30:
    // 0x18bf30: 0xb4620018  sdr         $v0, 0x18($v1)
    ctx->pc = 0x18bf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18bf34:
    // 0x18bf34: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x18bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_18bf38:
    // 0x18bf38: 0x9202df24  lbu         $v0, -0x20DC($s0)
    ctx->pc = 0x18bf38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958884)));
label_18bf3c:
    // 0x18bf3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x18bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_18bf40:
    // 0x18bf40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18bf44:
    // 0x18bf44: 0xa202df24  sb          $v0, -0x20DC($s0)
    ctx->pc = 0x18bf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294958884), (uint8_t)GPR_U32(ctx, 2));
label_18bf48:
    // 0x18bf48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18bf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18bf4c:
    // 0x18bf4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18bf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18bf50:
    // 0x18bf50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18bf50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18bf54:
    // 0x18bf54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18bf54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18bf58:
    // 0x18bf58: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18bf58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18bf5c:
    // 0x18bf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18bf60:
    // 0x18bf60: 0x3e00008  jr          $ra
label_18bf64:
    if (ctx->pc == 0x18BF64u) {
        ctx->pc = 0x18BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF60u;
        // 0x18bf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF68u;
        goto label_fallthrough_0x18bf60;
    }
    ctx->pc = 0x18BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF60u;
        // 0x18bf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18bf60:
    ctx->pc = 0x18BF68u;
}
