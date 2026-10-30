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

// Function: sub_00446290
// Address: 0x446290 - 0x446400
void sub_00446290_0x446290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446290_0x446290");
#endif

    switch (ctx->pc) {
        case 0x446290u: goto label_446290;
        case 0x446294u: goto label_446294;
        case 0x446298u: goto label_446298;
        case 0x44629cu: goto label_44629c;
        case 0x4462a0u: goto label_4462a0;
        case 0x4462a4u: goto label_4462a4;
        case 0x4462a8u: goto label_4462a8;
        case 0x4462acu: goto label_4462ac;
        case 0x4462b0u: goto label_4462b0;
        case 0x4462b4u: goto label_4462b4;
        case 0x4462b8u: goto label_4462b8;
        case 0x4462bcu: goto label_4462bc;
        case 0x4462c0u: goto label_4462c0;
        case 0x4462c4u: goto label_4462c4;
        case 0x4462c8u: goto label_4462c8;
        case 0x4462ccu: goto label_4462cc;
        case 0x4462d0u: goto label_4462d0;
        case 0x4462d4u: goto label_4462d4;
        case 0x4462d8u: goto label_4462d8;
        case 0x4462dcu: goto label_4462dc;
        case 0x4462e0u: goto label_4462e0;
        case 0x4462e4u: goto label_4462e4;
        case 0x4462e8u: goto label_4462e8;
        case 0x4462ecu: goto label_4462ec;
        case 0x4462f0u: goto label_4462f0;
        case 0x4462f4u: goto label_4462f4;
        case 0x4462f8u: goto label_4462f8;
        case 0x4462fcu: goto label_4462fc;
        case 0x446300u: goto label_446300;
        case 0x446304u: goto label_446304;
        case 0x446308u: goto label_446308;
        case 0x44630cu: goto label_44630c;
        case 0x446310u: goto label_446310;
        case 0x446314u: goto label_446314;
        case 0x446318u: goto label_446318;
        case 0x44631cu: goto label_44631c;
        case 0x446320u: goto label_446320;
        case 0x446324u: goto label_446324;
        case 0x446328u: goto label_446328;
        case 0x44632cu: goto label_44632c;
        case 0x446330u: goto label_446330;
        case 0x446334u: goto label_446334;
        case 0x446338u: goto label_446338;
        case 0x44633cu: goto label_44633c;
        case 0x446340u: goto label_446340;
        case 0x446344u: goto label_446344;
        case 0x446348u: goto label_446348;
        case 0x44634cu: goto label_44634c;
        case 0x446350u: goto label_446350;
        case 0x446354u: goto label_446354;
        case 0x446358u: goto label_446358;
        case 0x44635cu: goto label_44635c;
        case 0x446360u: goto label_446360;
        case 0x446364u: goto label_446364;
        case 0x446368u: goto label_446368;
        case 0x44636cu: goto label_44636c;
        case 0x446370u: goto label_446370;
        case 0x446374u: goto label_446374;
        case 0x446378u: goto label_446378;
        case 0x44637cu: goto label_44637c;
        case 0x446380u: goto label_446380;
        case 0x446384u: goto label_446384;
        case 0x446388u: goto label_446388;
        case 0x44638cu: goto label_44638c;
        case 0x446390u: goto label_446390;
        case 0x446394u: goto label_446394;
        case 0x446398u: goto label_446398;
        case 0x44639cu: goto label_44639c;
        case 0x4463a0u: goto label_4463a0;
        case 0x4463a4u: goto label_4463a4;
        case 0x4463a8u: goto label_4463a8;
        case 0x4463acu: goto label_4463ac;
        case 0x4463b0u: goto label_4463b0;
        case 0x4463b4u: goto label_4463b4;
        case 0x4463b8u: goto label_4463b8;
        case 0x4463bcu: goto label_4463bc;
        case 0x4463c0u: goto label_4463c0;
        case 0x4463c4u: goto label_4463c4;
        case 0x4463c8u: goto label_4463c8;
        case 0x4463ccu: goto label_4463cc;
        case 0x4463d0u: goto label_4463d0;
        case 0x4463d4u: goto label_4463d4;
        case 0x4463d8u: goto label_4463d8;
        case 0x4463dcu: goto label_4463dc;
        case 0x4463e0u: goto label_4463e0;
        case 0x4463e4u: goto label_4463e4;
        case 0x4463e8u: goto label_4463e8;
        case 0x4463ecu: goto label_4463ec;
        case 0x4463f0u: goto label_4463f0;
        case 0x4463f4u: goto label_4463f4;
        case 0x4463f8u: goto label_4463f8;
        case 0x4463fcu: goto label_4463fc;
        default: break;
    }

    ctx->pc = 0x446290u;

label_446290:
    // 0x446290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x446290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_446294:
    // 0x446294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x446294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_446298:
    // 0x446298: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x446298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_44629c:
    // 0x44629c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x44629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_4462a0:
    // 0x4462a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4462a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4462a4:
    // 0x4462a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4462a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4462a8:
    // 0x4462a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4462a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4462ac:
    // 0x4462ac: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x4462acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_4462b0:
    // 0x4462b0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4462b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_4462b4:
    // 0x4462b4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_4462b8:
    if (ctx->pc == 0x4462B8u) {
        ctx->pc = 0x4462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462B4u;
        // 0x4462b8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462BCu;
        goto label_4462bc;
    }
    ctx->pc = 0x4462B4u;
    {
        const bool branch_taken_0x4462b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462B4u;
        // 0x4462b8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462b4) {
            ctx->pc = 0x4462C8u;
            goto label_4462c8;
        }
    }
    ctx->pc = 0x4462BCu;
label_4462bc:
    // 0x4462bc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x4462bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4462c0:
    // 0x4462c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4462c4:
    if (ctx->pc == 0x4462C4u) {
        ctx->pc = 0x4462C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462C0u;
        // 0x4462c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462C8u;
        goto label_4462c8;
    }
    ctx->pc = 0x4462C0u;
    {
        const bool branch_taken_0x4462c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462C0u;
        // 0x4462c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462c0) {
            ctx->pc = 0x446304u;
            goto label_446304;
        }
    }
    ctx->pc = 0x4462C8u;
label_4462c8:
    // 0x4462c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4462c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4462cc:
    // 0x4462cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4462d0:
    if (ctx->pc == 0x4462D0u) {
        ctx->pc = 0x4462D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462CCu;
        // 0x4462d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462D4u;
        goto label_4462d4;
    }
    ctx->pc = 0x4462CCu;
    {
        const bool branch_taken_0x4462cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4462D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462CCu;
        // 0x4462d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462cc) {
            ctx->pc = 0x4462E0u;
            goto label_4462e0;
        }
    }
    ctx->pc = 0x4462D4u;
label_4462d4:
    // 0x4462d4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4462d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4462d8:
    // 0x4462d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4462dc:
    // 0x4462dc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4462dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4462e0:
    // 0x4462e0: 0xc1117f6  jal         func_445FD8
label_4462e4:
    if (ctx->pc == 0x4462E4u) {
        ctx->pc = 0x4462E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462E0u;
        // 0x4462e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462E8u;
        goto label_4462e8;
    }
    ctx->pc = 0x4462E0u;
    SET_GPR_U32(ctx, 31, 0x4462E8u);
    ctx->pc = 0x4462E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4462E0u;
    // 0x4462e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445FD8u, 0x4462E0u, 0x4462E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4462E8u;
label_4462e8:
    // 0x4462e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4462ec:
    if (ctx->pc == 0x4462ECu) {
        ctx->pc = 0x4462ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462E8u;
        // 0x4462ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462F0u;
        goto label_4462f0;
    }
    ctx->pc = 0x4462E8u;
    {
        const bool branch_taken_0x4462e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462E8u;
        // 0x4462ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462e8) {
            ctx->pc = 0x4462FCu;
            goto label_4462fc;
        }
    }
    ctx->pc = 0x4462F0u;
label_4462f0:
    // 0x4462f0: 0xc1119dc  jal         func_446770
label_4462f4:
    if (ctx->pc == 0x4462F4u) {
        ctx->pc = 0x4462F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462F0u;
        // 0x4462f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4462F8u;
        goto label_4462f8;
    }
    ctx->pc = 0x4462F0u;
    SET_GPR_U32(ctx, 31, 0x4462F8u);
    ctx->pc = 0x4462F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4462F0u;
    // 0x4462f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446770u, 0x4462F0u, 0x4462F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4462F8u;
label_4462f8:
    // 0x4462f8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4462f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4462fc:
    // 0x4462fc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_446300:
    if (ctx->pc == 0x446300u) {
        ctx->pc = 0x446300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462FCu;
        // 0x446300: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446304u;
        goto label_446304;
    }
    ctx->pc = 0x4462FCu;
    {
        const bool branch_taken_0x4462fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4462FCu;
        // 0x446300: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462fc) {
            ctx->pc = 0x44636Cu;
            goto label_44636c;
        }
    }
    ctx->pc = 0x446304u;
label_446304:
    // 0x446304: 0xc1117f6  jal         func_445FD8
label_446308:
    if (ctx->pc == 0x446308u) {
        ctx->pc = 0x446308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446304u;
        // 0x446308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44630Cu;
        goto label_44630c;
    }
    ctx->pc = 0x446304u;
    SET_GPR_U32(ctx, 31, 0x44630Cu);
    ctx->pc = 0x446308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446304u;
    // 0x446308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445FD8u, 0x446304u, 0x44630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44630Cu;
label_44630c:
    // 0x44630c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446310:
    // 0x446310: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x446310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446314:
    // 0x446314: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_446318:
    if (ctx->pc == 0x446318u) {
        ctx->pc = 0x446318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446314u;
        // 0x446318: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44631Cu;
        goto label_44631c;
    }
    ctx->pc = 0x446314u;
    {
        const bool branch_taken_0x446314 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x446318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446314u;
        // 0x446318: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446314) {
            ctx->pc = 0x446368u;
            goto label_446368;
        }
    }
    ctx->pc = 0x44631Cu;
label_44631c:
    // 0x44631c: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x44631cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_446320:
    // 0x446320: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_446324:
    if (ctx->pc == 0x446324u) {
        ctx->pc = 0x446324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446320u;
        // 0x446324: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446328u;
        goto label_446328;
    }
    ctx->pc = 0x446320u;
    {
        const bool branch_taken_0x446320 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x446324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446320u;
        // 0x446324: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446320) {
            ctx->pc = 0x44636Cu;
            goto label_44636c;
        }
    }
    ctx->pc = 0x446328u;
label_446328:
    // 0x446328: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x446328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_44632c:
    // 0x44632c: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_446330:
    if (ctx->pc == 0x446330u) {
        ctx->pc = 0x446330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44632Cu;
        // 0x446330: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446334u;
        goto label_446334;
    }
    ctx->pc = 0x44632Cu;
    {
        const bool branch_taken_0x44632c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x44632c) {
            ctx->pc = 0x446330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44632Cu;
            // 0x446330: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446370u;
            goto label_446370;
        }
    }
    ctx->pc = 0x446334u;
label_446334:
    // 0x446334: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x446334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_446338:
    // 0x446338: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x446338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_44633c:
    // 0x44633c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x44633cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446340:
    // 0x446340: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x446340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_446344:
    // 0x446344: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x446344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_446348:
    // 0x446348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x446348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44634c:
    // 0x44634c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x44634cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_446350:
    // 0x446350: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x446350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_446354:
    // 0x446354: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x446354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_446358:
    // 0x446358: 0xe0f809  jalr        $a3
label_44635c:
    if (ctx->pc == 0x44635Cu) {
        ctx->pc = 0x44635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446358u;
        // 0x44635c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446360u;
        goto label_446360;
    }
    ctx->pc = 0x446358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x446360u);
        ctx->pc = 0x44635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446358u;
        // 0x44635c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446358u, 0x446360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446360u;
label_446360:
    // 0x446360: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x446360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_446364:
    // 0x446364: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x446364u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446368:
    // 0x446368: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x446368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44636c:
    // 0x44636c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x44636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_446370:
    // 0x446370: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_446374:
    if (ctx->pc == 0x446374u) {
        ctx->pc = 0x446374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446370u;
        // 0x446374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446378u;
        goto label_446378;
    }
    ctx->pc = 0x446370u;
    {
        const bool branch_taken_0x446370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446370u;
        // 0x446374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446370) {
            ctx->pc = 0x4463E4u;
            goto label_4463e4;
        }
    }
    ctx->pc = 0x446378u;
label_446378:
    // 0x446378: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x446378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_44637c:
    // 0x44637c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_446380:
    // 0x446380: 0xc111cc4  jal         func_447310
label_446384:
    if (ctx->pc == 0x446384u) {
        ctx->pc = 0x446384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446380u;
        // 0x446384: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446388u;
        goto label_446388;
    }
    ctx->pc = 0x446380u;
    SET_GPR_U32(ctx, 31, 0x446388u);
    ctx->pc = 0x446384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446380u;
    // 0x446384: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447310u, 0x446380u, 0x446388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446388u;
label_446388:
    // 0x446388: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x446388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_44638c:
    // 0x44638c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_446390:
    // 0x446390: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_446394:
    if (ctx->pc == 0x446394u) {
        ctx->pc = 0x446394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446390u;
        // 0x446394: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446398u;
        goto label_446398;
    }
    ctx->pc = 0x446390u;
    {
        const bool branch_taken_0x446390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x446390) {
            ctx->pc = 0x446394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446390u;
            // 0x446394: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4463B0u;
            goto label_4463b0;
        }
    }
    ctx->pc = 0x446398u;
label_446398:
    // 0x446398: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_44639c:
    if (ctx->pc == 0x44639Cu) {
        ctx->pc = 0x44639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446398u;
        // 0x44639c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4463A0u;
        goto label_4463a0;
    }
    ctx->pc = 0x446398u;
    {
        const bool branch_taken_0x446398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x446398) {
            ctx->pc = 0x44639Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446398u;
            // 0x44639c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4463B0u;
            goto label_4463b0;
        }
    }
    ctx->pc = 0x4463A0u;
label_4463a0:
    // 0x4463a0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x4463a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_4463a4:
    // 0x4463a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4463a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4463a8:
    // 0x4463a8: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x4463a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_4463ac:
    // 0x4463ac: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x4463acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_4463b0:
    // 0x4463b0: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x4463b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_4463b4:
    // 0x4463b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4463b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4463b8:
    // 0x4463b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x4463b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_4463bc:
    // 0x4463bc: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x4463bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_4463c0:
    // 0x4463c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4463c4:
    if (ctx->pc == 0x4463C4u) {
        ctx->pc = 0x4463C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463C0u;
        // 0x4463c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4463C8u;
        goto label_4463c8;
    }
    ctx->pc = 0x4463C0u;
    {
        const bool branch_taken_0x4463c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4463C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463C0u;
        // 0x4463c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4463c0) {
            ctx->pc = 0x4463E4u;
            goto label_4463e4;
        }
    }
    ctx->pc = 0x4463C8u;
label_4463c8:
    // 0x4463c8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x4463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_4463cc:
    // 0x4463cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4463d0:
    // 0x4463d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4463d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4463d4:
    // 0x4463d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4463d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4463d8:
    // 0x4463d8: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x4463d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_4463dc:
    // 0x4463dc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x4463dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_4463e0:
    // 0x4463e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4463e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4463e4:
    // 0x4463e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4463e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4463e8:
    // 0x4463e8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x4463e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4463ec:
    // 0x4463ec: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4463ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4463f0:
    // 0x4463f0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4463f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4463f4:
    // 0x4463f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4463f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4463f8:
    // 0x4463f8: 0x3e00008  jr          $ra
label_4463fc:
    if (ctx->pc == 0x4463FCu) {
        ctx->pc = 0x4463FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463F8u;
        // 0x4463fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446400u;
        goto label_fallthrough_0x4463f8;
    }
    ctx->pc = 0x4463F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4463FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4463F8u;
        // 0x4463fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4463F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4463f8:
    ctx->pc = 0x446400u;
}
