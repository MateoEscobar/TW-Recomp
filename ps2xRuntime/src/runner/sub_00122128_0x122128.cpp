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

// Function: sub_00122128
// Address: 0x122128 - 0x1221a0
void sub_00122128_0x122128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122128_0x122128");
#endif

    switch (ctx->pc) {
        case 0x122128u: goto label_122128;
        case 0x12212cu: goto label_12212c;
        case 0x122130u: goto label_122130;
        case 0x122134u: goto label_122134;
        case 0x122138u: goto label_122138;
        case 0x12213cu: goto label_12213c;
        case 0x122140u: goto label_122140;
        case 0x122144u: goto label_122144;
        case 0x122148u: goto label_122148;
        case 0x12214cu: goto label_12214c;
        case 0x122150u: goto label_122150;
        case 0x122154u: goto label_122154;
        case 0x122158u: goto label_122158;
        case 0x12215cu: goto label_12215c;
        case 0x122160u: goto label_122160;
        case 0x122164u: goto label_122164;
        case 0x122168u: goto label_122168;
        case 0x12216cu: goto label_12216c;
        case 0x122170u: goto label_122170;
        case 0x122174u: goto label_122174;
        case 0x122178u: goto label_122178;
        case 0x12217cu: goto label_12217c;
        case 0x122180u: goto label_122180;
        case 0x122184u: goto label_122184;
        case 0x122188u: goto label_122188;
        case 0x12218cu: goto label_12218c;
        case 0x122190u: goto label_122190;
        case 0x122194u: goto label_122194;
        case 0x122198u: goto label_122198;
        case 0x12219cu: goto label_12219c;
        default: break;
    }

    ctx->pc = 0x122128u;

label_122128:
    // 0x122128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12212c:
    // 0x12212c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122130:
    // 0x122130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x122130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_122134:
    // 0x122134: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x122134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_122138:
    // 0x122138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12213c:
    // 0x12213c: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x12213cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_122140:
    // 0x122140: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x122140u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_122144:
    // 0x122144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122148:
    // 0x122148: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x122148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12214c:
    // 0x12214c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x12214cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_122150:
    // 0x122150: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x122150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_122154:
    // 0x122154: 0x40f809  jalr        $v0
label_122158:
    if (ctx->pc == 0x122158u) {
        ctx->pc = 0x122158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122154u;
        // 0x122158: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12215Cu;
        goto label_12215c;
    }
    ctx->pc = 0x122154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12215Cu);
        ctx->pc = 0x122158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122154u;
        // 0x122158: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122154u, 0x12215Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12215Cu;
label_12215c:
    // 0x12215c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122160:
    // 0x122160: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122164:
    // 0x122164: 0x8c43c698  lw          $v1, -0x3968($v0)
    ctx->pc = 0x122164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952600)));
label_122168:
    // 0x122168: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_12216c:
    if (ctx->pc == 0x12216Cu) {
        ctx->pc = 0x12216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122168u;
        // 0x12216c: 0xe6140058  swc1        $f20, 0x58($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122170u;
        goto label_122170;
    }
    ctx->pc = 0x122168u;
    {
        const bool branch_taken_0x122168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122168u;
        // 0x12216c: 0xe6140058  swc1        $f20, 0x58($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122168) {
            ctx->pc = 0x122188u;
            goto label_122188;
        }
    }
    ctx->pc = 0x122170u;
label_122170:
    // 0x122170: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x122170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_122174:
    // 0x122174: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_122178:
    // 0x122178: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x122178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_12217c:
    // 0x12217c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x12217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_122180:
    // 0x122180: 0x60f809  jalr        $v1
label_122184:
    if (ctx->pc == 0x122184u) {
        ctx->pc = 0x122184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122180u;
        // 0x122184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122188u;
        goto label_122188;
    }
    ctx->pc = 0x122180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122188u);
        ctx->pc = 0x122184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122180u;
        // 0x122184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122180u, 0x122188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122188u;
label_122188:
    // 0x122188: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x122188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12218c:
    // 0x12218c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12218cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122190:
    // 0x122190: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x122190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_122194:
    // 0x122194: 0x3e00008  jr          $ra
label_122198:
    if (ctx->pc == 0x122198u) {
        ctx->pc = 0x122198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122194u;
        // 0x122198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12219Cu;
        goto label_12219c;
    }
    ctx->pc = 0x122194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122194u;
        // 0x122198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12219Cu;
label_12219c:
    // 0x12219c: 0x0  nop
    ctx->pc = 0x12219cu;
    // NOP
    ctx->pc = 0x1221a0u;
}
