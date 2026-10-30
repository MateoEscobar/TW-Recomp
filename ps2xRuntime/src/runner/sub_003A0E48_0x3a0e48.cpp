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

// Function: sub_003A0E48
// Address: 0x3a0e48 - 0x3a0ed8
void sub_003A0E48_0x3a0e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0E48_0x3a0e48");
#endif

    switch (ctx->pc) {
        case 0x3a0eb4u: goto label_3a0eb4;
        case 0x3a0ec4u: goto label_3a0ec4;
        default: break;
    }

    ctx->pc = 0x3a0e48u;

    // 0x3a0e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0e50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a0e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a0e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0e5c: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x3a0e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3a0e60: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x3a0e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x3a0e64: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3a0e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0e68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A0E68u;
    {
        const bool branch_taken_0x3a0e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E68u;
        // 0x3a0e6c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e68) {
            ctx->pc = 0x3A0EC4u;
            goto label_3a0ec4;
        }
    }
    ctx->pc = 0x3A0E70u;
    // 0x3a0e70: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3a0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3a0e74: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3a0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3a0e78: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x3a0e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a0e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0e80: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x3a0e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a0e84: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A0E84u;
    {
        const bool branch_taken_0x3a0e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E84u;
        // 0x3a0e88: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e84) {
            ctx->pc = 0x3A0EC4u;
            goto label_3a0ec4;
        }
    }
    ctx->pc = 0x3A0E8Cu;
    // 0x3a0e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0e90: 0xac822c44  sw          $v0, 0x2C44($a0)
    ctx->pc = 0x3a0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11332), GPR_U32(ctx, 2));
    // 0x3a0e94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a0e98: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3a0e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3a0e9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a0e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a0ea0: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x3a0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x3a0ea4: 0xae2500d0  sw          $a1, 0xD0($s1)
    ctx->pc = 0x3a0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x3a0ea8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x3a0ea8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3a0eac: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x3A0EACu;
    SET_GPR_U32(ctx, 31, 0x3A0EB4u);
    ctx->pc = 0x3A0EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0EACu;
    // 0x3a0eb0: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3A0EACu, 0x3A0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0EB4u;
label_3a0eb4:
    // 0x3a0eb4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3a0eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a0eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ebc: 0xc0e83b6  jal         func_3A0ED8
    ctx->pc = 0x3A0EBCu;
    SET_GPR_U32(ctx, 31, 0x3A0EC4u);
    ctx->pc = 0x3A0EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0EBCu;
    // 0x3a0ec0: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0ED8u, 0x3A0EBCu, 0x3A0EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0EC4u;
label_3a0ec4:
    // 0x3a0ec4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a0ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0ec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0ED0u;
        // 0x3a0ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0ED8u;
}
