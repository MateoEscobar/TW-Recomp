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

// Function: sub_002371D8
// Address: 0x2371d8 - 0x2372a8
void sub_002371D8_0x2371d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002371D8_0x2371d8");
#endif

    switch (ctx->pc) {
        case 0x2371fcu: goto label_2371fc;
        case 0x237204u: goto label_237204;
        case 0x237248u: goto label_237248;
        case 0x237280u: goto label_237280;
        default: break;
    }

    ctx->pc = 0x2371d8u;

    // 0x2371d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2371d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2371dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2371dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2371e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2371e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2371e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2371e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2371e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2371ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2371ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2371f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2371f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2371F4u;
    SET_GPR_U32(ctx, 31, 0x2371FCu);
    ctx->pc = 0x2371F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371F4u;
    // 0x2371f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2371F4u, 0x2371FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371FCu;
label_2371fc:
    // 0x2371fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2371FCu;
    SET_GPR_U32(ctx, 31, 0x237204u);
    ctx->pc = 0x237200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371FCu;
    // 0x237200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2371FCu, 0x237204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237204u;
label_237204:
    // 0x237204: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x237204u;
    {
        const bool branch_taken_0x237204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237204) {
            ctx->pc = 0x237208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237204u;
            // 0x237208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237284u;
            goto label_237284;
        }
    }
    ctx->pc = 0x23720Cu;
    // 0x23720c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23720Cu;
    {
        const bool branch_taken_0x23720c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23720Cu;
        // 0x237210: 0x804301b0  lb          $v1, 0x1B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23720c) {
            ctx->pc = 0x237250u;
            goto label_237250;
        }
    }
    ctx->pc = 0x237214u;
    // 0x237214: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237218: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x237218u;
    {
        const bool branch_taken_0x237218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237218u;
        // 0x23721c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237218) {
            ctx->pc = 0x237280u;
            goto label_237280;
        }
    }
    ctx->pc = 0x237220u;
    // 0x237220: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x237220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x237224: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237228: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x237228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x23722c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237230: 0xc48c029c  lwc1        $f12, 0x29C($a0)
    ctx->pc = 0x237230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x237234: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x237234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237238: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x237238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23723c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237240: 0xc063514  jal         func_18D450
    ctx->pc = 0x237240u;
    SET_GPR_U32(ctx, 31, 0x237248u);
    ctx->pc = 0x237244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237240u;
    // 0x237244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x237240u, 0x237248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237248u;
label_237248:
    // 0x237248: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x237248u;
    {
        const bool branch_taken_0x237248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237248u;
        // 0x23724c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237248) {
            ctx->pc = 0x237284u;
            goto label_237284;
        }
    }
    ctx->pc = 0x237250u;
label_237250:
    // 0x237250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237254: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x237254u;
    {
        const bool branch_taken_0x237254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237254u;
        // 0x237258: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237254) {
            ctx->pc = 0x237280u;
            goto label_237280;
        }
    }
    ctx->pc = 0x23725Cu;
    // 0x23725c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237260: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x237260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x237264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237268: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23726c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x237270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237278: 0xc063514  jal         func_18D450
    ctx->pc = 0x237278u;
    SET_GPR_U32(ctx, 31, 0x237280u);
    ctx->pc = 0x23727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237278u;
    // 0x23727c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x237278u, 0x237280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237280u;
label_237280:
    // 0x237280: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x237280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_237284:
    // 0x237284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x237284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23728c: 0x3e00008  jr          $ra
    ctx->pc = 0x23728Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23728Cu;
        // 0x237290: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23728Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237294u;
    // 0x237294: 0x0  nop
    ctx->pc = 0x237294u;
    // NOP
    // 0x237298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23729c: 0x0  nop
    ctx->pc = 0x23729cu;
    // NOP
    // 0x2372a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2372a4: 0x0  nop
    ctx->pc = 0x2372a4u;
    // NOP
    ctx->pc = 0x2372a8u;
}
