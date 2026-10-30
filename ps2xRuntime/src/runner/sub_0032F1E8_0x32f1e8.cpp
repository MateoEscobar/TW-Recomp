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

// Function: sub_0032F1E8
// Address: 0x32f1e8 - 0x32f398
void sub_0032F1E8_0x32f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F1E8_0x32f1e8");
#endif

    switch (ctx->pc) {
        case 0x32f2b0u: goto label_32f2b0;
        case 0x32f2c4u: goto label_32f2c4;
        case 0x32f2d4u: goto label_32f2d4;
        case 0x32f2dcu: goto label_32f2dc;
        case 0x32f2f0u: goto label_32f2f0;
        case 0x32f304u: goto label_32f304;
        case 0x32f318u: goto label_32f318;
        case 0x32f32cu: goto label_32f32c;
        case 0x32f33cu: goto label_32f33c;
        case 0x32f34cu: goto label_32f34c;
        case 0x32f35cu: goto label_32f35c;
        case 0x32f36cu: goto label_32f36c;
        case 0x32f37cu: goto label_32f37c;
        default: break;
    }

    ctx->pc = 0x32f1e8u;

    // 0x32f1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f1ec: 0x24020109  addiu       $v0, $zero, 0x109
    ctx->pc = 0x32f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x32f1f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32f1f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f1f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f200: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32f204: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32F204u;
    {
        const bool branch_taken_0x32f204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F204u;
        // 0x32f208: 0x8e110034  lw          $s1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f204) {
            ctx->pc = 0x32F2A4u;
            goto label_32f2a4;
        }
    }
    ctx->pc = 0x32F20Cu;
    // 0x32f20c: 0x2862010a  slti        $v0, $v1, 0x10A
    ctx->pc = 0x32f20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)266) ? 1 : 0);
    // 0x32f210: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32F210u;
    {
        const bool branch_taken_0x32f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F210u;
        // 0x32f214: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f210) {
            ctx->pc = 0x32F25Cu;
            goto label_32f25c;
        }
    }
    ctx->pc = 0x32F218u;
    // 0x32f218: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x32F218u;
    {
        const bool branch_taken_0x32f218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F218u;
        // 0x32f21c: 0x28620104  slti        $v0, $v1, 0x104 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)260) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f218) {
            ctx->pc = 0x32F2CCu;
            goto label_32f2cc;
        }
    }
    ctx->pc = 0x32F220u;
    // 0x32f220: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F220u;
    {
        const bool branch_taken_0x32f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F220u;
        // 0x32f224: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f220) {
            ctx->pc = 0x32F240u;
            goto label_32f240;
        }
    }
    ctx->pc = 0x32F228u;
    // 0x32f228: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x32F228u;
    {
        const bool branch_taken_0x32f228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F228u;
        // 0x32f22c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f228) {
            ctx->pc = 0x32F344u;
            goto label_32f344;
        }
    }
    ctx->pc = 0x32F230u;
    // 0x32f230: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x32F230u;
    {
        const bool branch_taken_0x32f230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F230u;
        // 0x32f234: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f230) {
            ctx->pc = 0x32F364u;
            goto label_32f364;
        }
    }
    ctx->pc = 0x32F238u;
    // 0x32f238: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x32F238u;
    {
        const bool branch_taken_0x32f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F238u;
        // 0x32f23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f238) {
            ctx->pc = 0x32F374u;
            goto label_32f374;
        }
    }
    ctx->pc = 0x32F240u;
label_32f240:
    // 0x32f240: 0x24020107  addiu       $v0, $zero, 0x107
    ctx->pc = 0x32f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x32f244: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x32F244u;
    {
        const bool branch_taken_0x32f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F244u;
        // 0x32f248: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f244) {
            ctx->pc = 0x32F2F8u;
            goto label_32f2f8;
        }
    }
    ctx->pc = 0x32F24Cu;
    // 0x32f24c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x32F24Cu;
    {
        const bool branch_taken_0x32f24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F24Cu;
        // 0x32f250: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f24c) {
            ctx->pc = 0x32F320u;
            goto label_32f320;
        }
    }
    ctx->pc = 0x32F254u;
    // 0x32f254: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x32F254u;
    {
        const bool branch_taken_0x32f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F254u;
        // 0x32f258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f254) {
            ctx->pc = 0x32F374u;
            goto label_32f374;
        }
    }
    ctx->pc = 0x32F25Cu;
label_32f25c:
    // 0x32f25c: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x32f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x32f260: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x32F260u;
    {
        const bool branch_taken_0x32f260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F260u;
        // 0x32f264: 0x28620110  slti        $v0, $v1, 0x110 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)272) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f260) {
            ctx->pc = 0x32F354u;
            goto label_32f354;
        }
    }
    ctx->pc = 0x32F268u;
    // 0x32f268: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F268u;
    {
        const bool branch_taken_0x32f268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F268u;
        // 0x32f26c: 0x2402010a  addiu       $v0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f268) {
            ctx->pc = 0x32F288u;
            goto label_32f288;
        }
    }
    ctx->pc = 0x32F270u;
    // 0x32f270: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x32F270u;
    {
        const bool branch_taken_0x32f270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F270u;
        // 0x32f274: 0x2402010e  addiu       $v0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f270) {
            ctx->pc = 0x32F334u;
            goto label_32f334;
        }
    }
    ctx->pc = 0x32F278u;
    // 0x32f278: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x32F278u;
    {
        const bool branch_taken_0x32f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F278u;
        // 0x32f27c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f278) {
            ctx->pc = 0x32F30Cu;
            goto label_32f30c;
        }
    }
    ctx->pc = 0x32F280u;
    // 0x32f280: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x32F280u;
    {
        const bool branch_taken_0x32f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F280u;
        // 0x32f284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f280) {
            ctx->pc = 0x32F374u;
            goto label_32f374;
        }
    }
    ctx->pc = 0x32F288u;
label_32f288:
    // 0x32f288: 0x24020112  addiu       $v0, $zero, 0x112
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x32f28c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32F28Cu;
    {
        const bool branch_taken_0x32f28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F28Cu;
        // 0x32f290: 0x24020113  addiu       $v0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f28c) {
            ctx->pc = 0x32F2B8u;
            goto label_32f2b8;
        }
    }
    ctx->pc = 0x32F294u;
    // 0x32f294: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x32F294u;
    {
        const bool branch_taken_0x32f294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F294u;
        // 0x32f298: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f294) {
            ctx->pc = 0x32F344u;
            goto label_32f344;
        }
    }
    ctx->pc = 0x32F29Cu;
    // 0x32f29c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32F29Cu;
    {
        const bool branch_taken_0x32f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F29Cu;
        // 0x32f2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f29c) {
            ctx->pc = 0x32F374u;
            goto label_32f374;
        }
    }
    ctx->pc = 0x32F2A4u;
label_32f2a4:
    // 0x32f2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2a8: 0xc0cbb54  jal         func_32ED50
    ctx->pc = 0x32F2A8u;
    SET_GPR_U32(ctx, 31, 0x32F2B0u);
    ctx->pc = 0x32F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2A8u;
    // 0x32f2ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED50u, 0x32F2A8u, 0x32F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2B0u;
label_32f2b0:
    // 0x32f2b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x32F2B0u;
    {
        const bool branch_taken_0x32f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F2B0u;
        // 0x32f2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f2b0) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F2B8u;
label_32f2b8:
    // 0x32f2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2bc: 0xc0cba08  jal         func_32E820
    ctx->pc = 0x32F2BCu;
    SET_GPR_U32(ctx, 31, 0x32F2C4u);
    ctx->pc = 0x32F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2BCu;
    // 0x32f2c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E820u, 0x32F2BCu, 0x32F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2C4u;
label_32f2c4:
    // 0x32f2c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x32F2C4u;
    {
        const bool branch_taken_0x32f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F2C4u;
        // 0x32f2c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f2c4) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F2CCu;
label_32f2cc:
    // 0x32f2cc: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32F2CCu;
    SET_GPR_U32(ctx, 31, 0x32F2D4u);
    ctx->pc = 0x32F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2CCu;
    // 0x32f2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32F2CCu, 0x32F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2D4u;
label_32f2d4:
    // 0x32f2d4: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32F2D4u;
    SET_GPR_U32(ctx, 31, 0x32F2DCu);
    ctx->pc = 0x32F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2D4u;
    // 0x32f2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32F2D4u, 0x32F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2DCu;
label_32f2dc:
    // 0x32f2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32f2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2e4: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x32f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x32f2e8: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32F2E8u;
    SET_GPR_U32(ctx, 31, 0x32F2F0u);
    ctx->pc = 0x32F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2E8u;
    // 0x32f2ec: 0x24060103  addiu       $a2, $zero, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32F2E8u, 0x32F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2F0u;
label_32f2f0:
    // 0x32f2f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x32F2F0u;
    {
        const bool branch_taken_0x32f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F2F0u;
        // 0x32f2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f2f0) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F2F8u;
label_32f2f8:
    // 0x32f2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2fc: 0xc0cbb10  jal         func_32EC40
    ctx->pc = 0x32F2FCu;
    SET_GPR_U32(ctx, 31, 0x32F304u);
    ctx->pc = 0x32F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2FCu;
    // 0x32f300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC40u, 0x32F2FCu, 0x32F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F304u;
label_32f304:
    // 0x32f304: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x32F304u;
    {
        const bool branch_taken_0x32f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F304u;
        // 0x32f308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f304) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F30Cu;
label_32f30c:
    // 0x32f30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f310: 0xc0cba40  jal         func_32E900
    ctx->pc = 0x32F310u;
    SET_GPR_U32(ctx, 31, 0x32F318u);
    ctx->pc = 0x32F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F310u;
    // 0x32f314: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E900u, 0x32F310u, 0x32F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F318u;
label_32f318:
    // 0x32f318: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x32F318u;
    {
        const bool branch_taken_0x32f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F318u;
        // 0x32f31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f318) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F320u;
label_32f320:
    // 0x32f320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f324: 0xc0cbbfc  jal         func_32EFF0
    ctx->pc = 0x32F324u;
    SET_GPR_U32(ctx, 31, 0x32F32Cu);
    ctx->pc = 0x32F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F324u;
    // 0x32f328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EFF0u, 0x32F324u, 0x32F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F32Cu;
label_32f32c:
    // 0x32f32c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32F32Cu;
    {
        const bool branch_taken_0x32f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F32Cu;
        // 0x32f330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f32c) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F334u;
label_32f334:
    // 0x32f334: 0xc0cbba8  jal         func_32EEA0
    ctx->pc = 0x32F334u;
    SET_GPR_U32(ctx, 31, 0x32F33Cu);
    ctx->pc = 0x32F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F334u;
    // 0x32f338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EEA0u, 0x32F334u, 0x32F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F33Cu;
label_32f33c:
    // 0x32f33c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32F33Cu;
    {
        const bool branch_taken_0x32f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F33Cu;
        // 0x32f340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f33c) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F344u;
label_32f344:
    // 0x32f344: 0xc0cbc12  jal         func_32F048
    ctx->pc = 0x32F344u;
    SET_GPR_U32(ctx, 31, 0x32F34Cu);
    ctx->pc = 0x32F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F344u;
    // 0x32f348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F048u, 0x32F344u, 0x32F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F34Cu;
label_32f34c:
    // 0x32f34c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32F34Cu;
    {
        const bool branch_taken_0x32f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F34Cu;
        // 0x32f350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f34c) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F354u;
label_32f354:
    // 0x32f354: 0xc0cbc36  jal         func_32F0D8
    ctx->pc = 0x32F354u;
    SET_GPR_U32(ctx, 31, 0x32F35Cu);
    ctx->pc = 0x32F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F354u;
    // 0x32f358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F0D8u, 0x32F354u, 0x32F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F35Cu;
label_32f35c:
    // 0x32f35c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32F35Cu;
    {
        const bool branch_taken_0x32f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F35Cu;
        // 0x32f360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f35c) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F364u;
label_32f364:
    // 0x32f364: 0xc0cbc54  jal         func_32F150
    ctx->pc = 0x32F364u;
    SET_GPR_U32(ctx, 31, 0x32F36Cu);
    ctx->pc = 0x32F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F364u;
    // 0x32f368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F150u, 0x32F364u, 0x32F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F36Cu;
label_32f36c:
    // 0x32f36c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F36Cu;
    {
        const bool branch_taken_0x32f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F36Cu;
        // 0x32f370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f36c) {
            ctx->pc = 0x32F380u;
            goto label_32f380;
        }
    }
    ctx->pc = 0x32F374u;
label_32f374:
    // 0x32f374: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32F374u;
    SET_GPR_U32(ctx, 31, 0x32F37Cu);
    ctx->pc = 0x32F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F374u;
    // 0x32f378: 0x24a55e68  addiu       $a1, $a1, 0x5E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32F374u, 0x32F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F37Cu;
label_32f37c:
    // 0x32f37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f380:
    // 0x32f380: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32f380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f38c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F38Cu;
        // 0x32f390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F394u;
    // 0x32f394: 0x0  nop
    ctx->pc = 0x32f394u;
    // NOP
    ctx->pc = 0x32f398u;
}
