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

// Function: sub_0041F428
// Address: 0x41f428 - 0x41f4d0
void sub_0041F428_0x41f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F428_0x41f428");
#endif

    switch (ctx->pc) {
        case 0x41f458u: goto label_41f458;
        case 0x41f480u: goto label_41f480;
        default: break;
    }

    ctx->pc = 0x41f428u;

    // 0x41f428: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x41f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f42c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41f42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41f430: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x41f430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41f434: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41f434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41f438: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41f43c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41f440: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41f440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f448: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x41f448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x41f44c: 0x26320024  addiu       $s2, $s1, 0x24
    ctx->pc = 0x41f44cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x41f450: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x41F450u;
    SET_GPR_U32(ctx, 31, 0x41F458u);
    ctx->pc = 0x41F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F450u;
    // 0x41f454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x41F450u, 0x41F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F458u;
label_41f458:
    // 0x41f458: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41f458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f45c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x41F45Cu;
    {
        const bool branch_taken_0x41f45c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F45Cu;
        // 0x41f460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f45c) {
            ctx->pc = 0x41F4ACu;
            goto label_41f4ac;
        }
    }
    ctx->pc = 0x41F464u;
    // 0x41f464: 0x82230024  lb          $v1, 0x24($s1)
    ctx->pc = 0x41f464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x41f468: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x41f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x41f46c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x41F46Cu;
    {
        const bool branch_taken_0x41f46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F46Cu;
        // 0x41f470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f46c) {
            ctx->pc = 0x41F4ACu;
            goto label_41f4ac;
        }
    }
    ctx->pc = 0x41F474u;
    // 0x41f474: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x41f474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x41f478: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x41f478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x41f47c: 0x0  nop
    ctx->pc = 0x41f47cu;
    // NOP
label_41f480:
    // 0x41f480: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x41f484: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x41f484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x41f488: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41F488u;
    {
        const bool branch_taken_0x41f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F488u;
        // 0x41f48c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f488) {
            ctx->pc = 0x41F4ACu;
            goto label_41f4ac;
        }
    }
    ctx->pc = 0x41F490u;
    // 0x41f490: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x41f490u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x41f494: 0x10670005  beq         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x41F494u;
    {
        const bool branch_taken_0x41f494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x41F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F494u;
        // 0x41f498: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f494) {
            ctx->pc = 0x41F4ACu;
            goto label_41f4ac;
        }
    }
    ctx->pc = 0x41F49Cu;
    // 0x41f49c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41F49Cu;
    {
        const bool branch_taken_0x41f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F49Cu;
        // 0x41f4a0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f49c) {
            ctx->pc = 0x41F4ACu;
            goto label_41f4ac;
        }
    }
    ctx->pc = 0x41F4A4u;
    // 0x41f4a4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x41F4A4u;
    {
        const bool branch_taken_0x41f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F4A4u;
        // 0x41f4a8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f4a4) {
            ctx->pc = 0x41F480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f480;
        }
    }
    ctx->pc = 0x41F4ACu;
label_41f4ac:
    // 0x41f4ac: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x41f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x41f4b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41f4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f4b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41f4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41f4b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41f4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41f4bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41f4bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f4c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x41f4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x41F4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F4C8u;
        // 0x41f4cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F4D0u;
}
