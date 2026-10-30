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

// Function: sub_0041C230
// Address: 0x41c230 - 0x41c2a0
void sub_0041C230_0x41c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C230_0x41c230");
#endif

    switch (ctx->pc) {
        case 0x41c258u: goto label_41c258;
        case 0x41c28cu: goto label_41c28c;
        default: break;
    }

    ctx->pc = 0x41c230u;

    // 0x41c230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41c234: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41c234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41c23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c240: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41c240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c248: 0x94430322  lhu         $v1, 0x322($v0)
    ctx->pc = 0x41c248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 802)));
    // 0x41c24c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x41c250: 0xc087502  jal         func_21D408
    ctx->pc = 0x41C250u;
    SET_GPR_U32(ctx, 31, 0x41C258u);
    ctx->pc = 0x41C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C250u;
    // 0x41c254: 0xa4430322  sh          $v1, 0x322($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 802), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41C250u, 0x41C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C258u;
label_41c258:
    // 0x41c258: 0x9043028f  lbu         $v1, 0x28F($v0)
    ctx->pc = 0x41c258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 655)));
    // 0x41c25c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x41C25Cu;
    {
        const bool branch_taken_0x41c25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C25Cu;
        // 0x41c260: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c25c) {
            ctx->pc = 0x41C28Cu;
            goto label_41c28c;
        }
    }
    ctx->pc = 0x41C264u;
    // 0x41c264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41c264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41c268: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41c268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41c26c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x41c26cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x41c270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c274: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x41c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x41c278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41c278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c27c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41c27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41c280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41c280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c284: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41C284u;
    SET_GPR_U32(ctx, 31, 0x41C28Cu);
    ctx->pc = 0x41C288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C284u;
    // 0x41c288: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41C284u, 0x41C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C28Cu;
label_41c28c:
    // 0x41c28c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41c28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c294: 0x3e00008  jr          $ra
    ctx->pc = 0x41C294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C294u;
        // 0x41c298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C29Cu;
    // 0x41c29c: 0x0  nop
    ctx->pc = 0x41c29cu;
    // NOP
    ctx->pc = 0x41c2a0u;
}
