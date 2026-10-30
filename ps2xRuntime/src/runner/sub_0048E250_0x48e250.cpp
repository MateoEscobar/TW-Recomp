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

// Function: sub_0048E250
// Address: 0x48e250 - 0x48ecc4
void sub_0048E250_0x48e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E250_0x48e250");
#endif

    switch (ctx->pc) {
        case 0x48e2a0u: goto label_48e2a0;
        case 0x48e2acu: goto label_48e2ac;
        case 0x48e370u: goto label_48e370;
        case 0x48e3d0u: goto label_48e3d0;
        case 0x48e46cu: goto label_48e46c;
        case 0x48e508u: goto label_48e508;
        case 0x48e5a0u: goto label_48e5a0;
        case 0x48e624u: goto label_48e624;
        case 0x48e6f8u: goto label_48e6f8;
        case 0x48e7ecu: goto label_48e7ec;
        case 0x48e8e4u: goto label_48e8e4;
        case 0x48e9dcu: goto label_48e9dc;
        case 0x48ea98u: goto label_48ea98;
        case 0x48ec0cu: goto label_48ec0c;
        case 0x48ec84u: goto label_48ec84;
        default: break;
    }

    ctx->pc = 0x48e250u;

    // 0x48e250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48e254: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x48e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x48e258: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48e25c: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x48e25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x48e260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48e264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48e264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e268: 0x10400296  beqz        $v0, . + 4 + (0x296 << 2)
    ctx->pc = 0x48E268u;
    {
        const bool branch_taken_0x48e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E268u;
        // 0x48e26c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e268) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E270u;
    // 0x48e270: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x48e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x48e274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48e278: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x48e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x48e27c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48e280: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48e280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48e284: 0x800008  jr          $a0
    ctx->pc = 0x48E284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48E28Cu: goto label_48e28c;
            case 0x48E418u: goto label_48e418;
            case 0x48E4A8u: goto label_48e4a8;
            case 0x48E540u: goto label_48e540;
            case 0x48E5D8u: goto label_48e5d8;
            case 0x48E5E8u: goto label_48e5e8;
            case 0x48E660u: goto label_48e660;
            case 0x48E68Cu: goto label_48e68c;
            case 0x48E750u: goto label_48e750;
            case 0x48E828u: goto label_48e828;
            case 0x48E920u: goto label_48e920;
            case 0x48EA18u: goto label_48ea18;
            case 0x48EA54u: goto label_48ea54;
            case 0x48EA8Cu: goto label_48ea8c;
            case 0x48EAF0u: goto label_48eaf0;
            case 0x48EB0Cu: goto label_48eb0c;
            case 0x48EB30u: goto label_48eb30;
            case 0x48EC48u: goto label_48ec48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E284u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48E28Cu;
label_48e28c:
    // 0x48e28c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x48e28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e290: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x48E290u;
    {
        const bool branch_taken_0x48e290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E290u;
        // 0x48e294: 0xaf908a28  sw          $s0, -0x75D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e290) {
            ctx->pc = 0x48E2FCu;
            goto label_48e2fc;
        }
    }
    ctx->pc = 0x48E298u;
    // 0x48e298: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x48E298u;
    SET_GPR_U32(ctx, 31, 0x48E2A0u);
    ctx->pc = 0x48E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E298u;
    // 0x48e29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x48E298u, 0x48E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E2A0u;
label_48e2a0:
    // 0x48e2a0: 0x8f848a28  lw          $a0, -0x75D8($gp)
    ctx->pc = 0x48e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x48e2a4: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x48E2A4u;
    SET_GPR_U32(ctx, 31, 0x48E2ACu);
    ctx->pc = 0x48E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E2A4u;
    // 0x48e2a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x48E2A4u, 0x48E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E2ACu;
label_48e2ac:
    // 0x48e2ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48E2ACu;
    {
        const bool branch_taken_0x48e2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2ACu;
        // 0x48e2b0: 0xdf838730  ld          $v1, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2ac) {
            ctx->pc = 0x48E2E0u;
            goto label_48e2e0;
        }
    }
    ctx->pc = 0x48E2B4u;
    // 0x48e2b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x48e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x48e2b8: 0x8f848a28  lw          $a0, -0x75D8($gp)
    ctx->pc = 0x48e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x48e2bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48e2c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48e2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48e2c4: 0xff838730  sd          $v1, -0x78D0($gp)
    ctx->pc = 0x48e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 3));
    // 0x48e2c8: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x48e2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x48e2cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x48e2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x48e2d0: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x48E2D0u;
    {
        const bool branch_taken_0x48e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x48e2d0) {
            ctx->pc = 0x48E2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48E2D0u;
            // 0x48e2d4: 0xaf918a2c  sw          $s1, -0x75D4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48E310u;
            goto label_48e310;
        }
    }
    ctx->pc = 0x48E2D8u;
    // 0x48e2d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x48E2D8u;
    {
        const bool branch_taken_0x48e2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2D8u;
        // 0x48e2dc: 0xaf808a2c  sw          $zero, -0x75D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2d8) {
            ctx->pc = 0x48E310u;
            goto label_48e310;
        }
    }
    ctx->pc = 0x48E2E0u;
label_48e2e0:
    // 0x48e2e0: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48e2e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x48e2e4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x48e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x48e2e8: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x48e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x48e2ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48e2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e2f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48e2f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48E2F4u;
    {
        const bool branch_taken_0x48e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E2F4u;
        // 0x48e2f8: 0xaf808a28  sw          $zero, -0x75D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2f4) {
            ctx->pc = 0x48E30Cu;
            goto label_48e30c;
        }
    }
    ctx->pc = 0x48E2FCu;
label_48e2fc:
    // 0x48e2fc: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48e2fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x48e300: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x48e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x48e304: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x48e304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x48e308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_48e30c:
    // 0x48e30c: 0xff828730  sd          $v0, -0x78D0($gp)
    ctx->pc = 0x48e30cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
label_48e310:
    // 0x48e310: 0x8f828a30  lw          $v0, -0x75D0($gp)
    ctx->pc = 0x48e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x48e314: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E314u;
    {
        const bool branch_taken_0x48e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E314u;
        // 0x48e318: 0xdf828730  ld          $v0, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e314) {
            ctx->pc = 0x48E328u;
            goto label_48e328;
        }
    }
    ctx->pc = 0x48E31Cu;
    // 0x48e31c: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x48e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x48e320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E320u;
    {
        const bool branch_taken_0x48e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E320u;
        // 0x48e324: 0xdf828730  ld          $v0, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e320) {
            ctx->pc = 0x48E334u;
            goto label_48e334;
        }
    }
    ctx->pc = 0x48E328u;
label_48e328:
    // 0x48e328: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48e328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48e32c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48E32Cu;
    {
        const bool branch_taken_0x48e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E32Cu;
        // 0x48e330: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e32c) {
            ctx->pc = 0x48E33Cu;
            goto label_48e33c;
        }
    }
    ctx->pc = 0x48E334u;
label_48e334:
    // 0x48e334: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x48e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x48e338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48e338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_48e33c:
    // 0x48e33c: 0xff828730  sd          $v0, -0x78D0($gp)
    ctx->pc = 0x48e33cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
    // 0x48e340: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x48e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x48e344: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x48E344u;
    {
        const bool branch_taken_0x48e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E344u;
        // 0x48e348: 0xdf8386f8  ld          $v1, -0x7908($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e344) {
            ctx->pc = 0x48E3A8u;
            goto label_48e3a8;
        }
    }
    ctx->pc = 0x48E34Cu;
    // 0x48e34c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x48e34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x48e350: 0x5440025f  bnel        $v0, $zero, . + 4 + (0x25F << 2)
    ctx->pc = 0x48E350u;
    {
        const bool branch_taken_0x48e350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e350) {
            ctx->pc = 0x48E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48E350u;
            // 0x48e354: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E358u;
    // 0x48e358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e35c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e360: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48e364: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48e364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e368: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E368u;
    SET_GPR_U32(ctx, 31, 0x48E370u);
    ctx->pc = 0x48E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E368u;
    // 0x48e36c: 0xff8286f8  sd          $v0, -0x7908($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E368u, 0x48E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E370u;
label_48e370:
    // 0x48e370: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e374: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e378: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e37c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e380: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e380u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e384: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e388: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e388u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e38c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e390: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e394: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48e394u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48e398: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x48e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48e39c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e39cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e3a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x48E3A0u;
    {
        const bool branch_taken_0x48e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3A0u;
        // 0x48e3a4: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3a0) {
            ctx->pc = 0x48E408u;
            goto label_48e408;
        }
    }
    ctx->pc = 0x48E3A8u;
label_48e3a8:
    // 0x48e3a8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x48e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x48e3ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48e3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48e3b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48e3b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48e3b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x48E3B4u;
    {
        const bool branch_taken_0x48e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E3B4u;
        // 0x48e3b8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3b4) {
            ctx->pc = 0x48E410u;
            goto label_48e410;
        }
    }
    ctx->pc = 0x48E3BCu;
    // 0x48e3bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e3c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x48e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48e3c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e3c8: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E3C8u;
    SET_GPR_U32(ctx, 31, 0x48E3D0u);
    ctx->pc = 0x48E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E3C8u;
    // 0x48e3cc: 0xff8286f8  sd          $v0, -0x7908($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E3C8u, 0x48E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3D0u;
label_48e3d0:
    // 0x48e3d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e3d4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e3d8: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e3dc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e3e0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e3e0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e3e4: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e3e8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e3ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e3f0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e3f4: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48e3f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48e3f8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x48e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48e3fc: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e3fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e400: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e404: 0x0  nop
    ctx->pc = 0x48e404u;
    // NOP
label_48e408:
    // 0x48e408: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e40c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_48e410:
    // 0x48e410: 0x1000022f  b           . + 4 + (0x22F << 2)
    ctx->pc = 0x48E410u;
    {
        const bool branch_taken_0x48e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E410u;
        // 0x48e414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e410) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E418u;
label_48e418:
    // 0x48e418: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e41c: 0x12020229  beq         $s0, $v0, . + 4 + (0x229 << 2)
    ctx->pc = 0x48E41Cu;
    {
        const bool branch_taken_0x48e41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E41Cu;
        // 0x48e420: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e41c) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E424u;
    // 0x48e424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E424u;
    {
        const bool branch_taken_0x48e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E424u;
        // 0x48e428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e424) {
            ctx->pc = 0x48E43Cu;
            goto label_48e43c;
        }
    }
    ctx->pc = 0x48E42Cu;
    // 0x48e42c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48E42Cu;
    {
        const bool branch_taken_0x48e42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E42Cu;
        // 0x48e430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e42c) {
            ctx->pc = 0x48E450u;
            goto label_48e450;
        }
    }
    ctx->pc = 0x48E434u;
    // 0x48e434: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x48E434u;
    {
        const bool branch_taken_0x48e434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E434u;
        // 0x48e438: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e434) {
            ctx->pc = 0x48ECD4u;
            return;
        }
    }
    ctx->pc = 0x48E43Cu;
label_48e43c:
    // 0x48e43c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48e440: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E440u;
    {
        const bool branch_taken_0x48e440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E440u;
        // 0x48e444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e440) {
            ctx->pc = 0x48E458u;
            goto label_48e458;
        }
    }
    ctx->pc = 0x48E448u;
    // 0x48e448: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x48E448u;
    {
        const bool branch_taken_0x48e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E448u;
        // 0x48e44c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e448) {
            ctx->pc = 0x48ECD4u;
            return;
        }
    }
    ctx->pc = 0x48E450u;
label_48e450:
    // 0x48e450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48E450u;
    {
        const bool branch_taken_0x48e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E450u;
        // 0x48e454: 0xff808710  sd          $zero, -0x78F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e450) {
            ctx->pc = 0x48E460u;
            goto label_48e460;
        }
    }
    ctx->pc = 0x48E458u;
label_48e458:
    // 0x48e458: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48e45c: 0xff828710  sd          $v0, -0x78F0($gp)
    ctx->pc = 0x48e45cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 2));
label_48e460:
    // 0x48e460: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e464: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E464u;
    SET_GPR_U32(ctx, 31, 0x48E46Cu);
    ctx->pc = 0x48E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E464u;
    // 0x48e468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E464u, 0x48E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E46Cu;
label_48e46c:
    // 0x48e46c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e470: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e474: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e478: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e47c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e47cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e480: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e484: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e484u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e488: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e48c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e490: 0xdf858710  ld          $a1, -0x78F0($gp)
    ctx->pc = 0x48e490u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x48e494: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x48e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48e498: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e498u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e49c: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x48E49Cu;
    {
        const bool branch_taken_0x48e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E49Cu;
        // 0x48e4a0: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e49c) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48E4A4u;
    // 0x48e4a4: 0x0  nop
    ctx->pc = 0x48e4a4u;
    // NOP
label_48e4a8:
    // 0x48e4a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e4ac: 0x12020205  beq         $s0, $v0, . + 4 + (0x205 << 2)
    ctx->pc = 0x48E4ACu;
    {
        const bool branch_taken_0x48e4ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4ACu;
        // 0x48e4b0: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4ac) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E4B4u;
    // 0x48e4b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E4B4u;
    {
        const bool branch_taken_0x48e4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4B4u;
        // 0x48e4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4b4) {
            ctx->pc = 0x48E4CCu;
            goto label_48e4cc;
        }
    }
    ctx->pc = 0x48E4BCu;
    // 0x48e4bc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48E4BCu;
    {
        const bool branch_taken_0x48e4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4BCu;
        // 0x48e4c0: 0xdf828710  ld          $v0, -0x78F0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4bc) {
            ctx->pc = 0x48E4E0u;
            goto label_48e4e0;
        }
    }
    ctx->pc = 0x48E4C4u;
    // 0x48e4c4: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x48E4C4u;
    {
        const bool branch_taken_0x48e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4C4u;
        // 0x48e4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4c4) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E4CCu;
label_48e4cc:
    // 0x48e4cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48e4d0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48E4D0u;
    {
        const bool branch_taken_0x48e4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4D0u;
        // 0x48e4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4d0) {
            ctx->pc = 0x48E4ECu;
            goto label_48e4ec;
        }
    }
    ctx->pc = 0x48E4D8u;
    // 0x48e4d8: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x48E4D8u;
    {
        const bool branch_taken_0x48e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4D8u;
        // 0x48e4dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4d8) {
            ctx->pc = 0x48ECD4u;
            return;
        }
    }
    ctx->pc = 0x48E4E0u;
label_48e4e0:
    // 0x48e4e0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x48e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x48e4e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E4E4u;
    {
        const bool branch_taken_0x48e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E4E4u;
        // 0x48e4e8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e4e4) {
            ctx->pc = 0x48E4F8u;
            goto label_48e4f8;
        }
    }
    ctx->pc = 0x48E4ECu;
label_48e4ec:
    // 0x48e4ec: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x48e4ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x48e4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e4f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_48e4f8:
    // 0x48e4f8: 0xff828710  sd          $v0, -0x78F0($gp)
    ctx->pc = 0x48e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 2));
    // 0x48e4fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e500: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E500u;
    SET_GPR_U32(ctx, 31, 0x48E508u);
    ctx->pc = 0x48E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E500u;
    // 0x48e504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E500u, 0x48E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E508u;
label_48e508:
    // 0x48e508: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e50c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e510: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e514: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e518: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e518u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e51c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e520: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e520u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e524: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e528: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e52c: 0xdf858710  ld          $a1, -0x78F0($gp)
    ctx->pc = 0x48e52cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x48e530: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x48e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48e534: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e534u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e538: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x48E538u;
    {
        const bool branch_taken_0x48e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E538u;
        // 0x48e53c: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e538) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48E540u;
label_48e540:
    // 0x48e540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48e540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e544: 0x120201df  beq         $s0, $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x48E544u;
    {
        const bool branch_taken_0x48e544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E544u;
        // 0x48e548: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e544) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E54Cu;
    // 0x48e54c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E54Cu;
    {
        const bool branch_taken_0x48e54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E54Cu;
        // 0x48e550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e54c) {
            ctx->pc = 0x48E564u;
            goto label_48e564;
        }
    }
    ctx->pc = 0x48E554u;
    // 0x48e554: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48E554u;
    {
        const bool branch_taken_0x48e554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E554u;
        // 0x48e558: 0xdf828710  ld          $v0, -0x78F0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e554) {
            ctx->pc = 0x48E578u;
            goto label_48e578;
        }
    }
    ctx->pc = 0x48E55Cu;
    // 0x48e55c: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x48E55Cu;
    {
        const bool branch_taken_0x48e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E55Cu;
        // 0x48e560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e55c) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E564u;
label_48e564:
    // 0x48e564: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48e568: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48E568u;
    {
        const bool branch_taken_0x48e568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E568u;
        // 0x48e56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e568) {
            ctx->pc = 0x48E584u;
            goto label_48e584;
        }
    }
    ctx->pc = 0x48E570u;
    // 0x48e570: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x48E570u;
    {
        const bool branch_taken_0x48e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E570u;
        // 0x48e574: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e570) {
            ctx->pc = 0x48ECD4u;
            return;
        }
    }
    ctx->pc = 0x48E578u;
label_48e578:
    // 0x48e578: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x48e578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x48e57c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E57Cu;
    {
        const bool branch_taken_0x48e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E57Cu;
        // 0x48e580: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e57c) {
            ctx->pc = 0x48E590u;
            goto label_48e590;
        }
    }
    ctx->pc = 0x48E584u;
label_48e584:
    // 0x48e584: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x48e584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x48e588: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x48e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48e58c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_48e590:
    // 0x48e590: 0xff828710  sd          $v0, -0x78F0($gp)
    ctx->pc = 0x48e590u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 2));
    // 0x48e594: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e598: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E598u;
    SET_GPR_U32(ctx, 31, 0x48E5A0u);
    ctx->pc = 0x48E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E598u;
    // 0x48e59c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E598u, 0x48E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E5A0u;
label_48e5a0:
    // 0x48e5a0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e5a4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e5a8: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e5ac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e5b0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e5b0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e5b4: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e5b8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e5bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e5c0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e5c4: 0xdf858710  ld          $a1, -0x78F0($gp)
    ctx->pc = 0x48e5c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x48e5c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x48e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48e5cc: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e5ccu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e5d0: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x48E5D0u;
    {
        const bool branch_taken_0x48e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5D0u;
        // 0x48e5d4: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5d0) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48E5D8u;
label_48e5d8:
    // 0x48e5d8: 0x120001ba  beqz        $s0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x48E5D8u;
    {
        const bool branch_taken_0x48e5d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5D8u;
        // 0x48e5dc: 0xdf828730  ld          $v0, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5d8) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E5E0u;
    // 0x48e5e0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x48E5E0u;
    {
        const bool branch_taken_0x48e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5E0u;
        // 0x48e5e4: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5e0) {
            ctx->pc = 0x48EA48u;
            goto label_48ea48;
        }
    }
    ctx->pc = 0x48E5E8u;
label_48e5e8:
    // 0x48e5e8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E5E8u;
    {
        const bool branch_taken_0x48e5e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5E8u;
        // 0x48e5ec: 0xdf8286f8  ld          $v0, -0x7908($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5e8) {
            ctx->pc = 0x48E600u;
            goto label_48e600;
        }
    }
    ctx->pc = 0x48E5F0u;
    // 0x48e5f0: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x48e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x48e5f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48e5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48e5f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E5F8u;
    {
        const bool branch_taken_0x48e5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E5F8u;
        // 0x48e5fc: 0x3c040005  lui         $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e5f8) {
            ctx->pc = 0x48E60Cu;
            goto label_48e60c;
        }
    }
    ctx->pc = 0x48E600u;
label_48e600:
    // 0x48e600: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x48e600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x48e604: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48e604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48e608: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x48e608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_48e60c:
    // 0x48e60c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48e610: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48e610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48e614: 0xff8286f8  sd          $v0, -0x7908($gp)
    ctx->pc = 0x48e614u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
    // 0x48e618: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e61c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E61Cu;
    SET_GPR_U32(ctx, 31, 0x48E624u);
    ctx->pc = 0x48E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E61Cu;
    // 0x48e620: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E61Cu, 0x48E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E624u;
label_48e624:
    // 0x48e624: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e628: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e62c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e630: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e634: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e634u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e638: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e63c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e640: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e644: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e648: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48e648u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48e64c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x48e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48e650: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e650u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e654: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x48E654u;
    {
        const bool branch_taken_0x48e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E654u;
        // 0x48e658: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e654) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48E65Cu;
    // 0x48e65c: 0x0  nop
    ctx->pc = 0x48e65cu;
    // NOP
label_48e660:
    // 0x48e660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e664: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E664u;
    {
        const bool branch_taken_0x48e664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x48E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E664u;
        // 0x48e668: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e664) {
            ctx->pc = 0x48E678u;
            goto label_48e678;
        }
    }
    ctx->pc = 0x48E66Cu;
    // 0x48e66c: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48e66cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x48e670: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x48E670u;
    {
        const bool branch_taken_0x48e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E670u;
        // 0x48e674: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e670) {
            ctx->pc = 0x48EA48u;
            goto label_48ea48;
        }
    }
    ctx->pc = 0x48E678u;
label_48e678:
    // 0x48e678: 0x16020195  bne         $s0, $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x48E678u;
    {
        const bool branch_taken_0x48e678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x48E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E678u;
        // 0x48e67c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e678) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E680u;
    // 0x48e680: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48e680u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x48e684: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x48E684u;
    {
        const bool branch_taken_0x48e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E684u;
        // 0x48e688: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e684) {
            ctx->pc = 0x48EA38u;
            goto label_48ea38;
        }
    }
    ctx->pc = 0x48E68Cu;
label_48e68c:
    // 0x48e68c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x48E68Cu;
    {
        const bool branch_taken_0x48e68c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E68Cu;
        // 0x48e690: 0xdf8286e8  ld          $v0, -0x7918($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e68c) {
            ctx->pc = 0x48E6DCu;
            goto label_48e6dc;
        }
    }
    ctx->pc = 0x48E694u;
    // 0x48e694: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x48e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x48e698: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48e698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48e69c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48e69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48e6a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48e6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48e6a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48e6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48e6a8: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48e6a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48e6ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x48e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x48e6b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48e6b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x48e6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x48e6b8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x48E6B8u;
    {
        const bool branch_taken_0x48e6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E6B8u;
        // 0x48e6bc: 0xff8286e8  sd          $v0, -0x7918($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6b8) {
            ctx->pc = 0x48E6ECu;
            goto label_48e6ec;
        }
    }
    ctx->pc = 0x48E6C0u;
    // 0x48e6c0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x48e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x48e6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48e6c8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x48e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x48e6cc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x48e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48e6d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48e6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48e6d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48E6D4u;
    {
        const bool branch_taken_0x48e6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E6D4u;
        // 0x48e6d8: 0xff8286f8  sd          $v0, -0x7908($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6d4) {
            ctx->pc = 0x48E6ECu;
            goto label_48e6ec;
        }
    }
    ctx->pc = 0x48E6DCu;
label_48e6dc:
    // 0x48e6dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x48e6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x48e6e0: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x48e6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x48e6e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48e6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48e6e8: 0xff8286e8  sd          $v0, -0x7918($gp)
    ctx->pc = 0x48e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U64(ctx, 2));
label_48e6ec:
    // 0x48e6ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e6f0: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E6F0u;
    SET_GPR_U32(ctx, 31, 0x48E6F8u);
    ctx->pc = 0x48E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E6F0u;
    // 0x48e6f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E6F0u, 0x48E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E6F8u;
label_48e6f8:
    // 0x48e6f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e6fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e700: 0x34a58002  ori         $a1, $a1, 0x8002
    ctx->pc = 0x48e700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32770);
    // 0x48e704: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e708: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e708u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e70c: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e710: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48e710u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48e714: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x48e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48e718: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48e718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48e71c: 0xdf8586e8  ld          $a1, -0x7918($gp)
    ctx->pc = 0x48e71cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x48e720: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x48e720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x48e724: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e724u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e728: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48e728u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48e72c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x48e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48e730: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e734: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48e734u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48e738: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x48e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48e73c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e73cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e740: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x48e740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x48e744: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x48e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x48e748: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x48E748u;
    {
        const bool branch_taken_0x48e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E748u;
        // 0x48e74c: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e748) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48E750u;
label_48e750:
    // 0x48e750: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x48e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48e754: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x48e754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x48e758: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x48E758u;
    {
        const bool branch_taken_0x48e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E758u;
        // 0x48e75c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e758) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E760u;
    // 0x48e760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48e764: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x48e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
    // 0x48e768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48e768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48e76c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48e770: 0x800008  jr          $a0
    ctx->pc = 0x48E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48E778u: goto label_48e778;
            case 0x48E788u: goto label_48e788;
            case 0x48E798u: goto label_48e798;
            case 0x48E7A8u: goto label_48e7a8;
            case 0x48E7B8u: goto label_48e7b8;
            case 0x48E7C8u: goto label_48e7c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E770u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48E778u;
label_48e778:
    // 0x48e778: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48e778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e77c: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x48e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x48e780: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48E780u;
    {
        const bool branch_taken_0x48e780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E780u;
        // 0x48e784: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e780) {
            ctx->pc = 0x48E7DCu;
            goto label_48e7dc;
        }
    }
    ctx->pc = 0x48E788u;
label_48e788:
    // 0x48e788: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48e788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e78c: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x48e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x48e790: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48E790u;
    {
        const bool branch_taken_0x48e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E790u;
        // 0x48e794: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e790) {
            ctx->pc = 0x48E7D4u;
            goto label_48e7d4;
        }
    }
    ctx->pc = 0x48E798u;
label_48e798:
    // 0x48e798: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48e798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e79c: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x48e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x48e7a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48E7A0u;
    {
        const bool branch_taken_0x48e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7A0u;
        // 0x48e7a4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e7a0) {
            ctx->pc = 0x48E7D4u;
            goto label_48e7d4;
        }
    }
    ctx->pc = 0x48E7A8u;
label_48e7a8:
    // 0x48e7a8: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48e7a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e7ac: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x48e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x48e7b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48E7B0u;
    {
        const bool branch_taken_0x48e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7B0u;
        // 0x48e7b4: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e7b0) {
            ctx->pc = 0x48E7D4u;
            goto label_48e7d4;
        }
    }
    ctx->pc = 0x48E7B8u;
label_48e7b8:
    // 0x48e7b8: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48e7b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e7bc: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x48e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x48e7c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E7C0u;
    {
        const bool branch_taken_0x48e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7C0u;
        // 0x48e7c4: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e7c0) {
            ctx->pc = 0x48E7D4u;
            goto label_48e7d4;
        }
    }
    ctx->pc = 0x48E7C8u;
label_48e7c8:
    // 0x48e7c8: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48e7c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e7cc: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x48e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x48e7d0: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x48e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_48e7d4:
    // 0x48e7d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48e7d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_48e7dc:
    // 0x48e7dc: 0xff828718  sd          $v0, -0x78E8($gp)
    ctx->pc = 0x48e7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 2));
    // 0x48e7e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e7e4: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E7E4u;
    SET_GPR_U32(ctx, 31, 0x48E7ECu);
    ctx->pc = 0x48E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E7E4u;
    // 0x48e7e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E7E4u, 0x48E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E7ECu;
label_48e7ec:
    // 0x48e7ec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e7f0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e7f4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e7f8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e7fc: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e7fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e800: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e804: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e808: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e80c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e810: 0xdf858718  ld          $a1, -0x78E8($gp)
    ctx->pc = 0x48e810u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x48e814: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x48e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x48e818: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e818u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e81c: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x48E81Cu;
    {
        const bool branch_taken_0x48e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E81Cu;
        // 0x48e820: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e81c) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48E824u;
    // 0x48e824: 0x0  nop
    ctx->pc = 0x48e824u;
    // NOP
label_48e828:
    // 0x48e828: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x48e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48e82c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x48e82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48e830: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x48E830u;
    {
        const bool branch_taken_0x48e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E830u;
        // 0x48e834: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e830) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E838u;
    // 0x48e838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48e83c: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x48e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x48e840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48e844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48e848: 0x800008  jr          $a0
    ctx->pc = 0x48E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48E850u: goto label_48e850;
            case 0x48E858u: goto label_48e858;
            case 0x48E860u: goto label_48e860;
            case 0x48E868u: goto label_48e868;
            case 0x48E870u: goto label_48e870;
            case 0x48E878u: goto label_48e878;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48E850u;
label_48e850:
    // 0x48e850: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48E850u;
    {
        const bool branch_taken_0x48e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E850u;
        // 0x48e854: 0xaf808738  sw          $zero, -0x78C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e850) {
            ctx->pc = 0x48E880u;
            goto label_48e880;
        }
    }
    ctx->pc = 0x48E858u;
label_48e858:
    // 0x48e858: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48E858u;
    {
        const bool branch_taken_0x48e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E858u;
        // 0x48e85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e858) {
            ctx->pc = 0x48E87Cu;
            goto label_48e87c;
        }
    }
    ctx->pc = 0x48E860u;
label_48e860:
    // 0x48e860: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48E860u;
    {
        const bool branch_taken_0x48e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E860u;
        // 0x48e864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e860) {
            ctx->pc = 0x48E87Cu;
            goto label_48e87c;
        }
    }
    ctx->pc = 0x48E868u;
label_48e868:
    // 0x48e868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E868u;
    {
        const bool branch_taken_0x48e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E868u;
        // 0x48e86c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e868) {
            ctx->pc = 0x48E87Cu;
            goto label_48e87c;
        }
    }
    ctx->pc = 0x48E870u;
label_48e870:
    // 0x48e870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48E870u;
    {
        const bool branch_taken_0x48e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E870u;
        // 0x48e874: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e870) {
            ctx->pc = 0x48E87Cu;
            goto label_48e87c;
        }
    }
    ctx->pc = 0x48E878u;
label_48e878:
    // 0x48e878: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48e87c:
    // 0x48e87c: 0xaf828738  sw          $v0, -0x78C8($gp)
    ctx->pc = 0x48e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 2));
label_48e880:
    // 0x48e880: 0x8f86873c  lw          $a2, -0x78C4($gp)
    ctx->pc = 0x48e880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x48e884: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x48e884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x48e888: 0x8f858738  lw          $a1, -0x78C8($gp)
    ctx->pc = 0x48e888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x48e88c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x48e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x48e890: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x48e890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x48e894: 0x2463f4a8  addiu       $v1, $v1, -0xB58
    ctx->pc = 0x48e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964392));
    // 0x48e898: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x48e898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48e89c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48e8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48e8a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e8a8: 0xff838720  sd          $v1, -0x78E0($gp)
    ctx->pc = 0x48e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U64(ctx, 3));
    // 0x48e8ac: 0x4600108  bltz        $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x48E8ACu;
    {
        const bool branch_taken_0x48e8ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E8ACu;
        // 0x48e8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e8ac) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E8B4u;
    // 0x48e8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e8b8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48E8B8u;
    {
        const bool branch_taken_0x48e8b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x48e8b8) {
            ctx->pc = 0x48E8D8u;
            goto label_48e8d8;
        }
    }
    ctx->pc = 0x48E8C0u;
    // 0x48e8c0: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E8C0u;
    {
        const bool branch_taken_0x48e8c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x48e8c0) {
            ctx->pc = 0x48E8D8u;
            goto label_48e8d8;
        }
    }
    ctx->pc = 0x48E8C8u;
    // 0x48e8c8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x48e8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x48e8cc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x48e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x48e8d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48e8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48e8d4: 0xff828720  sd          $v0, -0x78E0($gp)
    ctx->pc = 0x48e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U64(ctx, 2));
label_48e8d8:
    // 0x48e8d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e8dc: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E8DCu;
    SET_GPR_U32(ctx, 31, 0x48E8E4u);
    ctx->pc = 0x48E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E8DCu;
    // 0x48e8e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E8DCu, 0x48E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E8E4u;
label_48e8e4:
    // 0x48e8e4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e8e8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e8e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e8ec: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e8f0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e8f4: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e8f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e8f8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e8fc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e900: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e904: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48e908: 0xdf858720  ld          $a1, -0x78E0($gp)
    ctx->pc = 0x48e908u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936352)));
    // 0x48e90c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x48e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x48e910: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e910u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e914: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x48E914u;
    {
        const bool branch_taken_0x48e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E914u;
        // 0x48e918: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e914) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48E91Cu;
    // 0x48e91c: 0x0  nop
    ctx->pc = 0x48e91cu;
    // NOP
label_48e920:
    // 0x48e920: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x48e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48e924: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x48e924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48e928: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x48E928u;
    {
        const bool branch_taken_0x48e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E928u;
        // 0x48e92c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e928) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48E930u;
    // 0x48e930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48e934: 0x2442f120  addiu       $v0, $v0, -0xEE0
    ctx->pc = 0x48e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
    // 0x48e938: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48e93c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48e940: 0x800008  jr          $a0
    ctx->pc = 0x48E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48E948u: goto label_48e948;
            case 0x48E950u: goto label_48e950;
            case 0x48E958u: goto label_48e958;
            case 0x48E960u: goto label_48e960;
            case 0x48E968u: goto label_48e968;
            case 0x48E970u: goto label_48e970;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E940u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48E948u;
label_48e948:
    // 0x48e948: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48E948u;
    {
        const bool branch_taken_0x48e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E948u;
        // 0x48e94c: 0xaf80873c  sw          $zero, -0x78C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e948) {
            ctx->pc = 0x48E978u;
            goto label_48e978;
        }
    }
    ctx->pc = 0x48E950u;
label_48e950:
    // 0x48e950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48E950u;
    {
        const bool branch_taken_0x48e950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E950u;
        // 0x48e954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e950) {
            ctx->pc = 0x48E974u;
            goto label_48e974;
        }
    }
    ctx->pc = 0x48E958u;
label_48e958:
    // 0x48e958: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48E958u;
    {
        const bool branch_taken_0x48e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E958u;
        // 0x48e95c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e958) {
            ctx->pc = 0x48E974u;
            goto label_48e974;
        }
    }
    ctx->pc = 0x48E960u;
label_48e960:
    // 0x48e960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E960u;
    {
        const bool branch_taken_0x48e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E960u;
        // 0x48e964: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e960) {
            ctx->pc = 0x48E974u;
            goto label_48e974;
        }
    }
    ctx->pc = 0x48E968u;
label_48e968:
    // 0x48e968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48E968u;
    {
        const bool branch_taken_0x48e968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E968u;
        // 0x48e96c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e968) {
            ctx->pc = 0x48E974u;
            goto label_48e974;
        }
    }
    ctx->pc = 0x48E970u;
label_48e970:
    // 0x48e970: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48e974:
    // 0x48e974: 0xaf82873c  sw          $v0, -0x78C4($gp)
    ctx->pc = 0x48e974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936380), GPR_U32(ctx, 2));
label_48e978:
    // 0x48e978: 0x8f86873c  lw          $a2, -0x78C4($gp)
    ctx->pc = 0x48e978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x48e97c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x48e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x48e980: 0x8f858738  lw          $a1, -0x78C8($gp)
    ctx->pc = 0x48e980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x48e984: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x48e984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x48e988: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x48e988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x48e98c: 0x2463f4a8  addiu       $v1, $v1, -0xB58
    ctx->pc = 0x48e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964392));
    // 0x48e990: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x48e990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48e994: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48e998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48e99c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e9a0: 0xff838720  sd          $v1, -0x78E0($gp)
    ctx->pc = 0x48e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U64(ctx, 3));
    // 0x48e9a4: 0x46000ca  bltz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x48E9A4u;
    {
        const bool branch_taken_0x48e9a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E9A4u;
        // 0x48e9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e9a4) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48E9ACu;
    // 0x48e9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e9b0: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48E9B0u;
    {
        const bool branch_taken_0x48e9b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x48e9b0) {
            ctx->pc = 0x48E9D0u;
            goto label_48e9d0;
        }
    }
    ctx->pc = 0x48E9B8u;
    // 0x48e9b8: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E9B8u;
    {
        const bool branch_taken_0x48e9b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x48e9b8) {
            ctx->pc = 0x48E9D0u;
            goto label_48e9d0;
        }
    }
    ctx->pc = 0x48E9C0u;
    // 0x48e9c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x48e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x48e9c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x48e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x48e9c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48e9cc: 0xff828720  sd          $v0, -0x78E0($gp)
    ctx->pc = 0x48e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U64(ctx, 2));
label_48e9d0:
    // 0x48e9d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48e9d4: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48E9D4u;
    SET_GPR_U32(ctx, 31, 0x48E9DCu);
    ctx->pc = 0x48E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E9D4u;
    // 0x48e9d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48E9D4u, 0x48E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E9DCu;
label_48e9dc:
    // 0x48e9dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48e9e0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48e9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48e9e4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48e9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48e9e8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48e9ec: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48e9ecu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48e9f0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48e9f4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48e9f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48e9fc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48ea00: 0xdf858720  ld          $a1, -0x78E0($gp)
    ctx->pc = 0x48ea00u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936352)));
    // 0x48ea04: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x48ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x48ea08: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48ea08u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48ea0c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x48EA0Cu;
    {
        const bool branch_taken_0x48ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA0Cu;
        // 0x48ea10: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea0c) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48EA14u;
    // 0x48ea14: 0x0  nop
    ctx->pc = 0x48ea14u;
    // NOP
label_48ea18:
    // 0x48ea18: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x48ea18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x48ea1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48EA1Cu;
    {
        const bool branch_taken_0x48ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA1Cu;
        // 0x48ea20: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea1c) {
            ctx->pc = 0x48EA30u;
            goto label_48ea30;
        }
    }
    ctx->pc = 0x48EA24u;
    // 0x48ea24: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x48ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x48ea28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48EA28u;
    {
        const bool branch_taken_0x48ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA28u;
        // 0x48ea2c: 0xdf828730  ld          $v0, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea28) {
            ctx->pc = 0x48EA44u;
            goto label_48ea44;
        }
    }
    ctx->pc = 0x48EA30u;
label_48ea30:
    // 0x48ea30: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48ea30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x48ea34: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_48ea38:
    // 0x48ea38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48ea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48ea3c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x48EA3Cu;
    {
        const bool branch_taken_0x48ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA3Cu;
        // 0x48ea40: 0xff828730  sd          $v0, -0x78D0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea3c) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48EA44u;
label_48ea44:
    // 0x48ea44: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x48ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_48ea48:
    // 0x48ea48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48ea48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48ea4c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x48EA4Cu;
    {
        const bool branch_taken_0x48ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA4Cu;
        // 0x48ea50: 0xff828730  sd          $v0, -0x78D0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea4c) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48EA54u;
label_48ea54:
    // 0x48ea54: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48EA54u;
    {
        const bool branch_taken_0x48ea54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA54u;
        // 0x48ea58: 0xdf828730  ld          $v0, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea54) {
            ctx->pc = 0x48EA70u;
            goto label_48ea70;
        }
    }
    ctx->pc = 0x48EA5Cu;
    // 0x48ea5c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x48ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x48ea60: 0x93838780  lbu         $v1, -0x7880($gp)
    ctx->pc = 0x48ea60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x48ea64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48ea68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48EA68u;
    {
        const bool branch_taken_0x48ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA68u;
        // 0x48ea6c: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea68) {
            ctx->pc = 0x48EA80u;
            goto label_48ea80;
        }
    }
    ctx->pc = 0x48EA70u;
label_48ea70:
    // 0x48ea70: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x48ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x48ea74: 0x93838780  lbu         $v1, -0x7880($gp)
    ctx->pc = 0x48ea74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x48ea78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48ea7c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x48ea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_48ea80:
    // 0x48ea80: 0xff828730  sd          $v0, -0x78D0($gp)
    ctx->pc = 0x48ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
    // 0x48ea84: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x48EA84u;
    {
        const bool branch_taken_0x48ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA84u;
        // 0x48ea88: 0xa3838780  sb          $v1, -0x7880($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936448), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea84) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48EA8Cu;
label_48ea8c:
    // 0x48ea8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48ea90: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48EA90u;
    SET_GPR_U32(ctx, 31, 0x48EA98u);
    ctx->pc = 0x48EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EA90u;
    // 0x48ea94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48EA90u, 0x48EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EA98u;
label_48ea98:
    // 0x48ea98: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x48ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x48ea9c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x48ea9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x48eaa0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48eaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x48eaa4: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x48eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x48eaa8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48eaac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48eaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48eab0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x48eab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x48eab4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48eab8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48eab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48eabc: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48eabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48eac0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48eac4: 0xff838708  sd          $v1, -0x78F8($gp)
    ctx->pc = 0x48eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936328), GPR_U64(ctx, 3));
    // 0x48eac8: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48eac8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48eacc: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48ead0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48ead4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ead8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48eadc: 0xdf858708  ld          $a1, -0x78F8($gp)
    ctx->pc = 0x48eadcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936328)));
    // 0x48eae0: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x48eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x48eae4: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48eae4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48eae8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x48EAE8u;
    {
        const bool branch_taken_0x48eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EAE8u;
        // 0x48eaec: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eae8) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48EAF0u;
label_48eaf0:
    // 0x48eaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48eaf4: 0x16020076  bne         $s0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x48EAF4u;
    {
        const bool branch_taken_0x48eaf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x48EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EAF4u;
        // 0x48eaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eaf4) {
            ctx->pc = 0x48ECD0u;
            return;
        }
    }
    ctx->pc = 0x48EAFCu;
    // 0x48eafc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48eb00: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x48eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x48eb04: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x48EB04u;
    {
        const bool branch_taken_0x48eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB04u;
        // 0x48eb08: 0xaf828a3c  sw          $v0, -0x75C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb04) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48EB0Cu;
label_48eb0c:
    // 0x48eb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48eb10: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48EB10u;
    {
        const bool branch_taken_0x48eb10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x48EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB10u;
        // 0x48eb14: 0x93828780  lbu         $v0, -0x7880($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb10) {
            ctx->pc = 0x48EB20u;
            goto label_48eb20;
        }
    }
    ctx->pc = 0x48EB18u;
    // 0x48eb18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48EB18u;
    {
        const bool branch_taken_0x48eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB18u;
        // 0x48eb1c: 0x304200df  andi        $v0, $v0, 0xDF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb18) {
            ctx->pc = 0x48EB24u;
            goto label_48eb24;
        }
    }
    ctx->pc = 0x48EB20u;
label_48eb20:
    // 0x48eb20: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x48eb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_48eb24:
    // 0x48eb24: 0xa3828780  sb          $v0, -0x7880($gp)
    ctx->pc = 0x48eb24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936448), (uint8_t)GPR_U32(ctx, 2));
    // 0x48eb28: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x48EB28u;
    {
        const bool branch_taken_0x48eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB28u;
        // 0x48eb2c: 0xaf908a34  sw          $s0, -0x75CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb28) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48EB30u;
label_48eb30:
    // 0x48eb30: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x48eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48eb34: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x48eb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48eb38: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x48EB38u;
    {
        const bool branch_taken_0x48eb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB38u;
        // 0x48eb3c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb38) {
            ctx->pc = 0x48ECC4u;
            return;
        }
    }
    ctx->pc = 0x48EB40u;
    // 0x48eb40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48eb44: 0x2442f140  addiu       $v0, $v0, -0xEC0
    ctx->pc = 0x48eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x48eb48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48eb4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48eb50: 0x800008  jr          $a0
    ctx->pc = 0x48EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48EB58u: goto label_48eb58;
            case 0x48EB68u: goto label_48eb68;
            case 0x48EB78u: goto label_48eb78;
            case 0x48EB88u: goto label_48eb88;
            case 0x48EB98u: goto label_48eb98;
            case 0x48EBA8u: goto label_48eba8;
            case 0x48EBB8u: goto label_48ebb8;
            case 0x48EBC8u: goto label_48ebc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EB50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48EB58u;
label_48eb58:
    // 0x48eb58: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eb58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48eb5c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48eb60: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x48EB60u;
    {
        const bool branch_taken_0x48eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB60u;
        // 0x48eb64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb60) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EB68u;
label_48eb68:
    // 0x48eb68: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eb68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48eb6c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48eb70: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48EB70u;
    {
        const bool branch_taken_0x48eb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB70u;
        // 0x48eb74: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb70) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EB78u;
label_48eb78:
    // 0x48eb78: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eb78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48eb7c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48eb80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48EB80u;
    {
        const bool branch_taken_0x48eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB80u;
        // 0x48eb84: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb80) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EB88u;
label_48eb88:
    // 0x48eb88: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eb88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48eb8c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48eb90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48EB90u;
    {
        const bool branch_taken_0x48eb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB90u;
        // 0x48eb94: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eb90) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EB98u;
label_48eb98:
    // 0x48eb98: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eb98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48eb9c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48eba0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48EBA0u;
    {
        const bool branch_taken_0x48eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EBA0u;
        // 0x48eba4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eba0) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EBA8u;
label_48eba8:
    // 0x48eba8: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eba8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ebac: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48ebb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48EBB0u;
    {
        const bool branch_taken_0x48ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EBB0u;
        // 0x48ebb4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebb0) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EBB8u;
label_48ebb8:
    // 0x48ebb8: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48ebb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ebbc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48ebc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48EBC0u;
    {
        const bool branch_taken_0x48ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EBC0u;
        // 0x48ebc4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebc0) {
            ctx->pc = 0x48EBD4u;
            goto label_48ebd4;
        }
    }
    ctx->pc = 0x48EBC8u;
label_48ebc8:
    // 0x48ebc8: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48ebc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ebcc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x48ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x48ebd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48ebd4:
    // 0x48ebd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48ebd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48ebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48ebdc: 0xff8286f8  sd          $v0, -0x7908($gp)
    ctx->pc = 0x48ebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
    // 0x48ebe0: 0xdf8386f8  ld          $v1, -0x7908($gp)
    ctx->pc = 0x48ebe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ebe4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x48ebe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x48ebe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48ebec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48ebecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48ebf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48EBF0u;
    {
        const bool branch_taken_0x48ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EBF0u;
        // 0x48ebf4: 0x2402cfff  addiu       $v0, $zero, -0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebf0) {
            ctx->pc = 0x48EC00u;
            goto label_48ec00;
        }
    }
    ctx->pc = 0x48EBF8u;
    // 0x48ebf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x48ebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48ebfc: 0xff8286f8  sd          $v0, -0x7908($gp)
    ctx->pc = 0x48ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
label_48ec00:
    // 0x48ec00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48ec04: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48EC04u;
    SET_GPR_U32(ctx, 31, 0x48EC0Cu);
    ctx->pc = 0x48EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EC04u;
    // 0x48ec08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48EC04u, 0x48EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC0Cu;
label_48ec0c:
    // 0x48ec0c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48ec10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48ec10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48ec14: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48ec14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48ec18: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48ec1c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48ec1cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48ec20: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48ec24: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48ec28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ec2c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48ec30: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48ec30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ec34: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x48ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48ec38: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48ec38u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48ec3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x48EC3Cu;
    {
        const bool branch_taken_0x48ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EC3Cu;
        // 0x48ec40: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec3c) {
            ctx->pc = 0x48ECB8u;
            goto label_48ecb8;
        }
    }
    ctx->pc = 0x48EC44u;
    // 0x48ec44: 0x0  nop
    ctx->pc = 0x48ec44u;
    // NOP
label_48ec48:
    // 0x48ec48: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x48ec48u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48ec4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48ec4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48ec50: 0xc78182c8  lwc1        $f1, -0x7D38($gp)
    ctx->pc = 0x48ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48ec54: 0xdf8386f8  ld          $v1, -0x7908($gp)
    ctx->pc = 0x48ec54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ec58: 0x2406f00f  addiu       $a2, $zero, -0xFF1
    ctx->pc = 0x48ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x48ec5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48ec60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48ec64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48ec64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x48ec68: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x48ec68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x48ec6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48ec6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x48ec70: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x48ec70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x48ec74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x48ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x48ec78: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x48ec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48ec7c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48EC7Cu;
    SET_GPR_U32(ctx, 31, 0x48EC84u);
    ctx->pc = 0x48EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EC7Cu;
    // 0x48ec80: 0xff8386f8  sd          $v1, -0x7908($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48EC7Cu, 0x48EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EC84u;
label_48ec84:
    // 0x48ec84: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48ec88: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48ec88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48ec8c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48ec8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48ec90: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48ec94: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48ec94u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48ec98: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48ec9c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48eca0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48eca4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48eca8: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48eca8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48ecac: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x48ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48ecb0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x48ecb0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x48ecb4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48ecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_48ecb8:
    // 0x48ecb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ecbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48ECBCu;
    {
        const bool branch_taken_0x48ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ECBCu;
        // 0x48ecc0: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ecbc) {
            ctx->pc = 0x48ECCCu;
            return;
        }
    }
    ctx->pc = 0x48ECC4u;
}
