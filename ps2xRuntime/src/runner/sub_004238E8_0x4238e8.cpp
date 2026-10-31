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

// Function: sub_004238E8
// Address: 0x4238e8 - 0x423964
void sub_004238E8_0x4238e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004238E8_0x4238e8");
#endif

    switch (ctx->pc) {
        case 0x423914u: goto label_423914;
        default: break;
    }

    ctx->pc = 0x4238e8u;

    // 0x4238e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4238e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4238ec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x4238ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x4238f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4238f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4238f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4238f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4238f8: 0x8c43e998  lw          $v1, -0x1668($v0)
    ctx->pc = 0x4238f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6FE998u));
    // 0x4238fc: 0x2444e998  addiu       $a0, $v0, -0x1668
    ctx->pc = 0x4238fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961560));
    // 0x423900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423904: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x423904u;
    {
        const bool branch_taken_0x423904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423904u;
        // 0x423908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423904) {
            ctx->pc = 0x423974u;
            return;
        }
    }
    ctx->pc = 0x42390Cu;
    // 0x42390c: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x42390Cu;
    SET_GPR_U32(ctx, 31, 0x423914u);
    ctx->pc = 0x423910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42390Cu;
    // 0x423910: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x42390Cu, 0x423914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423914u;
label_423914:
    // 0x423914: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x423914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423918: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x423918u;
    {
        const bool branch_taken_0x423918 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423918u;
        // 0x42391c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423918) {
            ctx->pc = 0x423978u;
            return;
        }
    }
    ctx->pc = 0x423920u;
    // 0x423920: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x423920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x423924: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x423924u;
    {
        const bool branch_taken_0x423924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423924u;
        // 0x423928: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423924) {
            ctx->pc = 0x423974u;
            return;
        }
    }
    ctx->pc = 0x42392Cu;
    // 0x42392c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x42392cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x423930: 0x2442baa0  addiu       $v0, $v0, -0x4560
    ctx->pc = 0x423930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949536));
    // 0x423934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x423934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x423938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x423938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42393c: 0x800008  jr          $a0
    ctx->pc = 0x42393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x423944u: goto label_423944;
            case 0x42394Cu: goto label_42394c;
            case 0x423954u: goto label_423954;
            case 0x42395Cu: goto label_42395c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42393Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x423944u;
label_423944:
    // 0x423944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x423944u;
    {
        const bool branch_taken_0x423944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423944u;
        // 0x423948: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423944) {
            ctx->pc = 0x423978u;
            return;
        }
    }
    ctx->pc = 0x42394Cu;
label_42394c:
    // 0x42394c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x42394Cu;
    {
        const bool branch_taken_0x42394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42394Cu;
        // 0x423950: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42394c) {
            ctx->pc = 0x423978u;
            return;
        }
    }
    ctx->pc = 0x423954u;
label_423954:
    // 0x423954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x423954u;
    {
        const bool branch_taken_0x423954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423954u;
        // 0x423958: 0x90c20002  lbu         $v0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423954) {
            ctx->pc = 0x423978u;
            return;
        }
    }
    ctx->pc = 0x42395Cu;
label_42395c:
    // 0x42395c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x42395Cu;
    {
        const bool branch_taken_0x42395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42395Cu;
        // 0x423960: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42395c) {
            ctx->pc = 0x423978u;
            return;
        }
    }
    ctx->pc = 0x423964u;
}
