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

// Function: sub_00235200
// Address: 0x235200 - 0x235268
void sub_00235200_0x235200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235200_0x235200");
#endif

    switch (ctx->pc) {
        case 0x23521cu: goto label_23521c;
        case 0x235224u: goto label_235224;
        default: break;
    }

    ctx->pc = 0x235200u;

    // 0x235200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235204: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235208: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23520c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23520cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235214: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235214u;
    SET_GPR_U32(ctx, 31, 0x23521Cu);
    ctx->pc = 0x235218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235214u;
    // 0x235218: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235214u, 0x23521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23521Cu;
label_23521c:
    // 0x23521c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23521Cu;
    SET_GPR_U32(ctx, 31, 0x235224u);
    ctx->pc = 0x235220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23521Cu;
    // 0x235220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23521Cu, 0x235224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235224u;
label_235224:
    // 0x235224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235228: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x235228u;
    {
        const bool branch_taken_0x235228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235228) {
            ctx->pc = 0x23522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235228u;
            // 0x23522c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23525Cu;
            goto label_23525c;
        }
    }
    ctx->pc = 0x235230u;
    // 0x235230: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235230u;
    {
        const bool branch_taken_0x235230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235230u;
        // 0x235234: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235230) {
            ctx->pc = 0x235244u;
            goto label_235244;
        }
    }
    ctx->pc = 0x235238u;
    // 0x235238: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x235238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23523c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23523Cu;
    {
        const bool branch_taken_0x23523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23523Cu;
        // 0x235240: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23523c) {
            ctx->pc = 0x235254u;
            goto label_235254;
        }
    }
    ctx->pc = 0x235244u;
label_235244:
    // 0x235244: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x235244u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x235248: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x23524c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23524cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x235250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235254:
    // 0x235254: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235254u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x235258: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23525c:
    // 0x23525c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235260: 0x3e00008  jr          $ra
    ctx->pc = 0x235260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235260u;
        // 0x235264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235268u;
}
