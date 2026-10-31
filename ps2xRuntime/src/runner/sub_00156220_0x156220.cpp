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

// Function: sub_00156220
// Address: 0x156220 - 0x1562a0
void sub_00156220_0x156220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156220_0x156220");
#endif

    switch (ctx->pc) {
        case 0x156220u: goto label_156220;
        case 0x156224u: goto label_156224;
        case 0x156228u: goto label_156228;
        case 0x15622cu: goto label_15622c;
        case 0x156230u: goto label_156230;
        case 0x156234u: goto label_156234;
        case 0x156238u: goto label_156238;
        case 0x15623cu: goto label_15623c;
        case 0x156240u: goto label_156240;
        case 0x156244u: goto label_156244;
        case 0x156248u: goto label_156248;
        case 0x15624cu: goto label_15624c;
        case 0x156250u: goto label_156250;
        case 0x156254u: goto label_156254;
        case 0x156258u: goto label_156258;
        case 0x15625cu: goto label_15625c;
        case 0x156260u: goto label_156260;
        case 0x156264u: goto label_156264;
        case 0x156268u: goto label_156268;
        case 0x15626cu: goto label_15626c;
        case 0x156270u: goto label_156270;
        case 0x156274u: goto label_156274;
        case 0x156278u: goto label_156278;
        case 0x15627cu: goto label_15627c;
        case 0x156280u: goto label_156280;
        case 0x156284u: goto label_156284;
        case 0x156288u: goto label_156288;
        case 0x15628cu: goto label_15628c;
        case 0x156290u: goto label_156290;
        case 0x156294u: goto label_156294;
        case 0x156298u: goto label_156298;
        case 0x15629cu: goto label_15629c;
        default: break;
    }

    ctx->pc = 0x156220u;

label_156220:
    // 0x156220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_156224:
    // 0x156224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_156228:
    // 0x156228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15622c:
    // 0x15622c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15622cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156230:
    // 0x156230: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x156230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_156234:
    // 0x156234: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_156238:
    // 0x156238: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15623c:
    // 0x15623c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_156240:
    // 0x156240: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x156240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_156244:
    // 0x156244: 0x60f809  jalr        $v1
label_156248:
    if (ctx->pc == 0x156248u) {
        ctx->pc = 0x156248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156244u;
        // 0x156248: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15624Cu;
        goto label_15624c;
    }
    ctx->pc = 0x156244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15624Cu);
        ctx->pc = 0x156248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156244u;
        // 0x156248: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156244u, 0x15624Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15624Cu;
label_15624c:
    // 0x15624c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_156250:
    // 0x156250: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x156250u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_156254:
    // 0x156254: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x156254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_156258:
    // 0x156258: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x156258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_15625c:
    // 0x15625c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x15625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_156260:
    // 0x156260: 0x60f809  jalr        $v1
label_156264:
    if (ctx->pc == 0x156264u) {
        ctx->pc = 0x156264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156260u;
        // 0x156264: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156268u;
        goto label_156268;
    }
    ctx->pc = 0x156260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156268u);
        ctx->pc = 0x156264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156260u;
        // 0x156264: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156260u, 0x156268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156268u;
label_156268:
    // 0x156268: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x156268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15626c:
    // 0x15626c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15626cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_156270:
    // 0x156270: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156274:
    // 0x156274: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_156278:
    // 0x156278: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15627c:
    // 0x15627c: 0x40f809  jalr        $v0
label_156280:
    if (ctx->pc == 0x156280u) {
        ctx->pc = 0x156280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15627Cu;
        // 0x156280: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156284u;
        goto label_156284;
    }
    ctx->pc = 0x15627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156284u);
        ctx->pc = 0x156280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15627Cu;
        // 0x156280: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15627Cu, 0x156284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156284u;
label_156284:
    // 0x156284: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x156284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_156288:
    // 0x156288: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x156288u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_15628c:
    // 0x15628c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15628cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156290:
    // 0x156290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156294:
    // 0x156294: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x156294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156298:
    // 0x156298: 0x3e00008  jr          $ra
label_15629c:
    if (ctx->pc == 0x15629Cu) {
        ctx->pc = 0x15629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156298u;
        // 0x15629c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1562A0u;
        goto label_fallthrough_0x156298;
    }
    ctx->pc = 0x156298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156298u;
        // 0x15629c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156298:
    ctx->pc = 0x1562A0u;
}
