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

// Function: sub_0030D208
// Address: 0x30d208 - 0x30d3b8
void sub_0030D208_0x30d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D208_0x30d208");
#endif

    switch (ctx->pc) {
        case 0x30d228u: goto label_30d228;
        case 0x30d258u: goto label_30d258;
        case 0x30d284u: goto label_30d284;
        case 0x30d294u: goto label_30d294;
        case 0x30d2b4u: goto label_30d2b4;
        case 0x30d2d4u: goto label_30d2d4;
        case 0x30d2f8u: goto label_30d2f8;
        case 0x30d344u: goto label_30d344;
        case 0x30d358u: goto label_30d358;
        case 0x30d360u: goto label_30d360;
        case 0x30d368u: goto label_30d368;
        default: break;
    }

    ctx->pc = 0x30d208u;

    // 0x30d208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30d208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30d20c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30d210: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30d214: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30d218: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30d21c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d220: 0xc0c33e6  jal         func_30CF98
    ctx->pc = 0x30D220u;
    SET_GPR_U32(ctx, 31, 0x30D228u);
    ctx->pc = 0x30D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D220u;
    // 0x30d224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CF98u, 0x30D220u, 0x30D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D228u;
label_30d228:
    // 0x30d228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30d228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d230: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D230u;
    {
        const bool branch_taken_0x30d230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D230u;
        // 0x30d234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d230) {
            ctx->pc = 0x30D240u;
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D238u;
    // 0x30d238: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30D238u;
    {
        const bool branch_taken_0x30d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D238u;
        // 0x30d23c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d238) {
            ctx->pc = 0x30D398u;
            goto label_30d398;
        }
    }
    ctx->pc = 0x30D240u;
label_30d240:
    // 0x30d240: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D240u;
    {
        const bool branch_taken_0x30d240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D240u;
        // 0x30d244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d240) {
            ctx->pc = 0x30D260u;
            goto label_30d260;
        }
    }
    ctx->pc = 0x30D248u;
    // 0x30d248: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x30D248u;
    {
        const bool branch_taken_0x30d248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D248u;
        // 0x30d24c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d248) {
            ctx->pc = 0x30D398u;
            goto label_30d398;
        }
    }
    ctx->pc = 0x30D250u;
    // 0x30d250: 0xc0c341e  jal         func_30D078
    ctx->pc = 0x30D250u;
    SET_GPR_U32(ctx, 31, 0x30D258u);
    ctx->pc = 0x30D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D250u;
    // 0x30d254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D078u, 0x30D250u, 0x30D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D258u;
label_30d258:
    // 0x30d258: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D258u;
    {
        const bool branch_taken_0x30d258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D258u;
        // 0x30d25c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d258) {
            ctx->pc = 0x30D268u;
            goto label_30d268;
        }
    }
    ctx->pc = 0x30D260u;
label_30d260:
    // 0x30d260: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x30D260u;
    {
        const bool branch_taken_0x30d260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D260u;
        // 0x30d264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d260) {
            ctx->pc = 0x30D398u;
            goto label_30d398;
        }
    }
    ctx->pc = 0x30D268u;
label_30d268:
    // 0x30d268: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x30d268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x30d26c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x30d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x30d270: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x30D270u;
    {
        const bool branch_taken_0x30d270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D270u;
        // 0x30d274: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d270) {
            ctx->pc = 0x30D2DCu;
            goto label_30d2dc;
        }
    }
    ctx->pc = 0x30D278u;
    // 0x30d278: 0x24421f40  addiu       $v0, $v0, 0x1F40
    ctx->pc = 0x30d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
    // 0x30d27c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x30D27Cu;
    {
        const bool branch_taken_0x30d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D27Cu;
        // 0x30d280: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d27c) {
            ctx->pc = 0x30D394u;
            goto label_30d394;
        }
    }
    ctx->pc = 0x30D284u;
label_30d284:
    // 0x30d284: 0x8e3003b0  lw          $s0, 0x3B0($s1)
    ctx->pc = 0x30d284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x30d288: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x30d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    // 0x30d28c: 0xc0cd526  jal         func_335498
    ctx->pc = 0x30D28Cu;
    SET_GPR_U32(ctx, 31, 0x30D294u);
    ctx->pc = 0x30D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D28Cu;
    // 0x30d290: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x30D28Cu, 0x30D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D294u;
label_30d294:
    // 0x30d294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d298: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30d298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x30d29c: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x30d29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d2a0: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x30d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x30d2a4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x30d2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30d2a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2ac: 0xc04442a  jal         func_1110A8
    ctx->pc = 0x30D2ACu;
    SET_GPR_U32(ctx, 31, 0x30D2B4u);
    ctx->pc = 0x30D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2ACu;
    // 0x30d2b0: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x30D2ACu, 0x30D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2B4u;
label_30d2b4:
    // 0x30d2b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x30d2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x30d2b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30d2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30d2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2cc: 0xc087900  jal         func_21E400
    ctx->pc = 0x30D2CCu;
    SET_GPR_U32(ctx, 31, 0x30D2D4u);
    ctx->pc = 0x30D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2CCu;
    // 0x30d2d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x30D2CCu, 0x30D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2D4u;
label_30d2d4:
    // 0x30d2d4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30D2D4u;
    {
        const bool branch_taken_0x30d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2D4u;
        // 0x30d2d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2d4) {
            ctx->pc = 0x30D398u;
            goto label_30d398;
        }
    }
    ctx->pc = 0x30D2DCu;
label_30d2dc:
    // 0x30d2dc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30d2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30d2e0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x30D2E0u;
    {
        const bool branch_taken_0x30d2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2E0u;
        // 0x30d2e4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2e0) {
            ctx->pc = 0x30D394u;
            goto label_30d394;
        }
    }
    ctx->pc = 0x30D2E8u;
    // 0x30d2e8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x30d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x30d2ec: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x30d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x30d2f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30D2F0u;
    SET_GPR_U32(ctx, 31, 0x30D2F8u);
    ctx->pc = 0x30D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2F0u;
    // 0x30d2f4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30D2F0u, 0x30D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2F8u;
label_30d2f8:
    // 0x30d2f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30d2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2fc: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x30D2FCu;
    {
        const bool branch_taken_0x30d2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2FCu;
        // 0x30d300: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2fc) {
            ctx->pc = 0x30D394u;
            goto label_30d394;
        }
    }
    ctx->pc = 0x30D304u;
    // 0x30d304: 0x80a301b0  lb          $v1, 0x1B0($a1)
    ctx->pc = 0x30d304u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x30d308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d30c: 0x9044041a  lbu         $a0, 0x41A($v0)
    ctx->pc = 0x30d30cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
    // 0x30d310: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30D310u;
    {
        const bool branch_taken_0x30d310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D310u;
        // 0x30d314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d310) {
            ctx->pc = 0x30D398u;
            goto label_30d398;
        }
    }
    ctx->pc = 0x30D318u;
    // 0x30d318: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x30d318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x30d31c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d320: 0x2447c9d0  addiu       $a3, $v0, -0x3630
    ctx->pc = 0x30d320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953424));
    // 0x30d324: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x30d324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30d328: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x30d328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30d32c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x30d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x56C9D8u));
    // 0x30d330: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x30d330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30d334: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x30d334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30d338: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x30d338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x30d33c: 0xc087502  jal         func_21D408
    ctx->pc = 0x30D33Cu;
    SET_GPR_U32(ctx, 31, 0x30D344u);
    ctx->pc = 0x30D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D33Cu;
    // 0x30d340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30D33Cu, 0x30D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D344u;
label_30d344:
    // 0x30d344: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x30d344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d348: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x30d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x30d34c: 0x24720048  addiu       $s2, $v1, 0x48
    ctx->pc = 0x30d34cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x30d350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d354: 0x0  nop
    ctx->pc = 0x30d354u;
    // NOP
label_30d358:
    // 0x30d358: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30D358u;
    SET_GPR_U32(ctx, 31, 0x30D360u);
    ctx->pc = 0x30D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D358u;
    // 0x30d35c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30D358u, 0x30D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D360u;
label_30d360:
    // 0x30d360: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30D360u;
    SET_GPR_U32(ctx, 31, 0x30D368u);
    ctx->pc = 0x30D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D360u;
    // 0x30d364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30D360u, 0x30D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D368u;
label_30d368:
    // 0x30d368: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30d368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d36c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D36Cu;
    {
        const bool branch_taken_0x30d36c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D36Cu;
        // 0x30d370: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d36c) {
            ctx->pc = 0x30D388u;
            goto label_30d388;
        }
    }
    ctx->pc = 0x30D374u;
    // 0x30d374: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x30d374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x30d378: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30d378u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30d37c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30d37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30d380: 0x5453ffc0  bnel        $v0, $s3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x30D380u;
    {
        const bool branch_taken_0x30d380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x30d380) {
            ctx->pc = 0x30D384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D380u;
            // 0x30d384: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d284;
        }
    }
    ctx->pc = 0x30D388u;
label_30d388:
    // 0x30d388: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30d388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30d38c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x30D38Cu;
    {
        const bool branch_taken_0x30d38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d38c) {
            ctx->pc = 0x30D390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D38Cu;
            // 0x30d390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d358;
        }
    }
    ctx->pc = 0x30D394u;
label_30d394:
    // 0x30d394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30d394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d398:
    // 0x30d398: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30d398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d39c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30d39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d3a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30d3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d3a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30d3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3ACu;
        // 0x30d3b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D3B4u;
    // 0x30d3b4: 0x0  nop
    ctx->pc = 0x30d3b4u;
    // NOP
    ctx->pc = 0x30d3b8u;
}
