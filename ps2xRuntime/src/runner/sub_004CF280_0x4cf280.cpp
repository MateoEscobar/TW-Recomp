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

// Function: sub_004CF280
// Address: 0x4cf280 - 0x4cf398
void sub_004CF280_0x4cf280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF280_0x4cf280");
#endif

    switch (ctx->pc) {
        case 0x4cf2acu: goto label_4cf2ac;
        case 0x4cf2bcu: goto label_4cf2bc;
        case 0x4cf314u: goto label_4cf314;
        case 0x4cf35cu: goto label_4cf35c;
        default: break;
    }

    ctx->pc = 0x4cf280u;

    // 0x4cf280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cf280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cf284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cf284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cf288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cf288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cf28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cf28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cf290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cf294: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4cf294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4cf298: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4cf298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4cf29c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4CF29Cu;
    {
        const bool branch_taken_0x4cf29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF29Cu;
        // 0x4cf2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf29c) {
            ctx->pc = 0x4CF380u;
            goto label_4cf380;
        }
    }
    ctx->pc = 0x4CF2A4u;
    // 0x4cf2a4: 0xc133448  jal         func_4CD120
    ctx->pc = 0x4CF2A4u;
    SET_GPR_U32(ctx, 31, 0x4CF2ACu);
    ctx->pc = 0x4CD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD120u, 0x4CF2A4u, 0x4CF2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF2ACu;
label_4cf2ac:
    // 0x4cf2ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CF2ACu;
    {
        const bool branch_taken_0x4cf2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF2ACu;
        // 0x4cf2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf2ac) {
            ctx->pc = 0x4CF2C4u;
            goto label_4cf2c4;
        }
    }
    ctx->pc = 0x4CF2B4u;
    // 0x4cf2b4: 0xc133448  jal         func_4CD120
    ctx->pc = 0x4CF2B4u;
    SET_GPR_U32(ctx, 31, 0x4CF2BCu);
    ctx->pc = 0x4CD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD120u, 0x4CF2B4u, 0x4CF2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF2BCu;
label_4cf2bc:
    // 0x4cf2bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF2BCu;
    {
        const bool branch_taken_0x4cf2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF2BCu;
        // 0x4cf2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf2bc) {
            ctx->pc = 0x4CF2D0u;
            goto label_4cf2d0;
        }
    }
    ctx->pc = 0x4CF2C4u;
label_4cf2c4:
    // 0x4cf2c4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4cf2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x4cf2c8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4CF2C8u;
    {
        const bool branch_taken_0x4cf2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf2c8) {
            ctx->pc = 0x4CF37Cu;
            goto label_4cf37c;
        }
    }
    ctx->pc = 0x4CF2D0u;
label_4cf2d0:
    // 0x4cf2d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4cf2d4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4CF2D4u;
    {
        const bool branch_taken_0x4cf2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf2d4) {
            ctx->pc = 0x4CF37Cu;
            goto label_4cf37c;
        }
    }
    ctx->pc = 0x4CF2DCu;
    // 0x4cf2dc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x4cf2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4cf2e0: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4cf2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4cf2e4: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x4cf2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x4cf2e8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4cf2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4cf2ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cf2f0: 0x2c421000  sltiu       $v0, $v0, 0x1000
    ctx->pc = 0x4cf2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4cf2f4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4CF2F4u;
    {
        const bool branch_taken_0x4cf2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF2F4u;
        // 0x4cf2f8: 0xa38823  subu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf2f4) {
            ctx->pc = 0x4CF374u;
            goto label_4cf374;
        }
    }
    ctx->pc = 0x4CF2FCu;
    // 0x4cf2fc: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4CF2FCu;
    {
        const bool branch_taken_0x4cf2fc = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x4cf2fc) {
            ctx->pc = 0x4CF374u;
            goto label_4cf374;
        }
    }
    ctx->pc = 0x4CF304u;
    // 0x4cf304: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4cf304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4cf308: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4cf308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cf30c: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CF30Cu;
    SET_GPR_U32(ctx, 31, 0x4CF314u);
    ctx->pc = 0x4CF310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF30Cu;
    // 0x4cf310: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CF30Cu, 0x4CF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF314u;
label_4cf314:
    // 0x4cf314: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x4cf314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x4cf318: 0x2a241001  slti        $a0, $s1, 0x1001
    ctx->pc = 0x4cf318u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x4cf31c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x4cf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4cf320: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x4cf320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4cf324: 0x64880a  movz        $s1, $v1, $a0
    ctx->pc = 0x4cf324u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4cf328: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x4cf328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4cf32c: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x4cf32cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x4cf330: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x4cf330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x4cf334: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cf334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4cf338: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x4cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x4cf33c: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x4cf33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
    // 0x4cf340: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x4cf340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x4cf344: 0xae100094  sw          $s0, 0x94($s0)
    ctx->pc = 0x4cf344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 16));
    // 0x4cf348: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x4cf348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x4cf34c: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x4cf34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    // 0x4cf350: 0xae070090  sw          $a3, 0x90($s0)
    ctx->pc = 0x4cf350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    // 0x4cf354: 0xc133470  jal         func_4CD1C0
    ctx->pc = 0x4CF354u;
    SET_GPR_U32(ctx, 31, 0x4CF35Cu);
    ctx->pc = 0x4CF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF354u;
    // 0x4cf358: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD1C0u, 0x4CF354u, 0x4CF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF35Cu;
label_4cf35c:
    // 0x4cf35c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CF35Cu;
    {
        const bool branch_taken_0x4cf35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf35c) {
            ctx->pc = 0x4CF37Cu;
            goto label_4cf37c;
        }
    }
    ctx->pc = 0x4CF364u;
    // 0x4cf364: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x4cf364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x4cf368: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4cf368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4cf36c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4CF36Cu;
    {
        const bool branch_taken_0x4cf36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf36c) {
            ctx->pc = 0x4CF37Cu;
            goto label_4cf37c;
        }
    }
    ctx->pc = 0x4CF374u;
label_4cf374:
    // 0x4cf374: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4cf374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cf378: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x4cf378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_4cf37c:
    // 0x4cf37c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4cf37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4cf380:
    // 0x4cf380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cf380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cf384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cf388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cf388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf38c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4cf38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cf390: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF390u;
        // 0x4cf394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF398u;
}
