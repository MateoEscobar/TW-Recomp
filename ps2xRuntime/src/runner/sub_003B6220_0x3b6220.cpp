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

// Function: sub_003B6220
// Address: 0x3b6220 - 0x3b63a0
void sub_003B6220_0x3b6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6220_0x3b6220");
#endif

    switch (ctx->pc) {
        case 0x3b6220u: goto label_3b6220;
        case 0x3b6224u: goto label_3b6224;
        case 0x3b6228u: goto label_3b6228;
        case 0x3b622cu: goto label_3b622c;
        case 0x3b6230u: goto label_3b6230;
        case 0x3b6234u: goto label_3b6234;
        case 0x3b6238u: goto label_3b6238;
        case 0x3b623cu: goto label_3b623c;
        case 0x3b6240u: goto label_3b6240;
        case 0x3b6244u: goto label_3b6244;
        case 0x3b6248u: goto label_3b6248;
        case 0x3b624cu: goto label_3b624c;
        case 0x3b6250u: goto label_3b6250;
        case 0x3b6254u: goto label_3b6254;
        case 0x3b6258u: goto label_3b6258;
        case 0x3b625cu: goto label_3b625c;
        case 0x3b6260u: goto label_3b6260;
        case 0x3b6264u: goto label_3b6264;
        case 0x3b6268u: goto label_3b6268;
        case 0x3b626cu: goto label_3b626c;
        case 0x3b6270u: goto label_3b6270;
        case 0x3b6274u: goto label_3b6274;
        case 0x3b6278u: goto label_3b6278;
        case 0x3b627cu: goto label_3b627c;
        case 0x3b6280u: goto label_3b6280;
        case 0x3b6284u: goto label_3b6284;
        case 0x3b6288u: goto label_3b6288;
        case 0x3b628cu: goto label_3b628c;
        case 0x3b6290u: goto label_3b6290;
        case 0x3b6294u: goto label_3b6294;
        case 0x3b6298u: goto label_3b6298;
        case 0x3b629cu: goto label_3b629c;
        case 0x3b62a0u: goto label_3b62a0;
        case 0x3b62a4u: goto label_3b62a4;
        case 0x3b62a8u: goto label_3b62a8;
        case 0x3b62acu: goto label_3b62ac;
        case 0x3b62b0u: goto label_3b62b0;
        case 0x3b62b4u: goto label_3b62b4;
        case 0x3b62b8u: goto label_3b62b8;
        case 0x3b62bcu: goto label_3b62bc;
        case 0x3b62c0u: goto label_3b62c0;
        case 0x3b62c4u: goto label_3b62c4;
        case 0x3b62c8u: goto label_3b62c8;
        case 0x3b62ccu: goto label_3b62cc;
        case 0x3b62d0u: goto label_3b62d0;
        case 0x3b62d4u: goto label_3b62d4;
        case 0x3b62d8u: goto label_3b62d8;
        case 0x3b62dcu: goto label_3b62dc;
        case 0x3b62e0u: goto label_3b62e0;
        case 0x3b62e4u: goto label_3b62e4;
        case 0x3b62e8u: goto label_3b62e8;
        case 0x3b62ecu: goto label_3b62ec;
        case 0x3b62f0u: goto label_3b62f0;
        case 0x3b62f4u: goto label_3b62f4;
        case 0x3b62f8u: goto label_3b62f8;
        case 0x3b62fcu: goto label_3b62fc;
        case 0x3b6300u: goto label_3b6300;
        case 0x3b6304u: goto label_3b6304;
        case 0x3b6308u: goto label_3b6308;
        case 0x3b630cu: goto label_3b630c;
        case 0x3b6310u: goto label_3b6310;
        case 0x3b6314u: goto label_3b6314;
        case 0x3b6318u: goto label_3b6318;
        case 0x3b631cu: goto label_3b631c;
        case 0x3b6320u: goto label_3b6320;
        case 0x3b6324u: goto label_3b6324;
        case 0x3b6328u: goto label_3b6328;
        case 0x3b632cu: goto label_3b632c;
        case 0x3b6330u: goto label_3b6330;
        case 0x3b6334u: goto label_3b6334;
        case 0x3b6338u: goto label_3b6338;
        case 0x3b633cu: goto label_3b633c;
        case 0x3b6340u: goto label_3b6340;
        case 0x3b6344u: goto label_3b6344;
        case 0x3b6348u: goto label_3b6348;
        case 0x3b634cu: goto label_3b634c;
        case 0x3b6350u: goto label_3b6350;
        case 0x3b6354u: goto label_3b6354;
        case 0x3b6358u: goto label_3b6358;
        case 0x3b635cu: goto label_3b635c;
        case 0x3b6360u: goto label_3b6360;
        case 0x3b6364u: goto label_3b6364;
        case 0x3b6368u: goto label_3b6368;
        case 0x3b636cu: goto label_3b636c;
        case 0x3b6370u: goto label_3b6370;
        case 0x3b6374u: goto label_3b6374;
        case 0x3b6378u: goto label_3b6378;
        case 0x3b637cu: goto label_3b637c;
        case 0x3b6380u: goto label_3b6380;
        case 0x3b6384u: goto label_3b6384;
        case 0x3b6388u: goto label_3b6388;
        case 0x3b638cu: goto label_3b638c;
        case 0x3b6390u: goto label_3b6390;
        case 0x3b6394u: goto label_3b6394;
        case 0x3b6398u: goto label_3b6398;
        case 0x3b639cu: goto label_3b639c;
        default: break;
    }

    ctx->pc = 0x3b6220u;

label_3b6220:
    // 0x3b6220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b6220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b6224:
    // 0x3b6224: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b6224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b6228:
    // 0x3b6228: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b6228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b622c:
    // 0x3b622c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b622cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6230:
    // 0x3b6230: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b6230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b6234:
    // 0x3b6234: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b6234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6238:
    // 0x3b6238: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b6238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b623c:
    // 0x3b623c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b623cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b6240:
    // 0x3b6240: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b6240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b6244:
    // 0x3b6244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b6248:
    // 0x3b6248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b624c:
    // 0x3b624c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b624cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b6250:
    // 0x3b6250: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b6254:
    // 0x3b6254: 0x40f809  jalr        $v0
label_3b6258:
    if (ctx->pc == 0x3B6258u) {
        ctx->pc = 0x3B6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6254u;
        // 0x3b6258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B625Cu;
        goto label_3b625c;
    }
    ctx->pc = 0x3B6254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B625Cu);
        ctx->pc = 0x3B6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6254u;
        // 0x3b6258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6254u, 0x3B625Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B625Cu;
label_3b625c:
    // 0x3b625c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b625cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6260:
    // 0x3b6260: 0xc0ea146  jal         func_3A8518
label_3b6264:
    if (ctx->pc == 0x3B6264u) {
        ctx->pc = 0x3B6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6260u;
        // 0x3b6264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6268u;
        goto label_3b6268;
    }
    ctx->pc = 0x3B6260u;
    SET_GPR_U32(ctx, 31, 0x3B6268u);
    ctx->pc = 0x3B6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6260u;
    // 0x3b6264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B6260u, 0x3B6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6268u;
label_3b6268:
    // 0x3b6268: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b6268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b626c:
    // 0x3b626c: 0xc0ea146  jal         func_3A8518
label_3b6270:
    if (ctx->pc == 0x3B6270u) {
        ctx->pc = 0x3B6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B626Cu;
        // 0x3b6270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6274u;
        goto label_3b6274;
    }
    ctx->pc = 0x3B626Cu;
    SET_GPR_U32(ctx, 31, 0x3B6274u);
    ctx->pc = 0x3B6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B626Cu;
    // 0x3b6270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B626Cu, 0x3B6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6274u;
label_3b6274:
    // 0x3b6274: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b6274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6278:
    // 0x3b6278: 0xc0ea146  jal         func_3A8518
label_3b627c:
    if (ctx->pc == 0x3B627Cu) {
        ctx->pc = 0x3B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6278u;
        // 0x3b627c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6280u;
        goto label_3b6280;
    }
    ctx->pc = 0x3B6278u;
    SET_GPR_U32(ctx, 31, 0x3B6280u);
    ctx->pc = 0x3B627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6278u;
    // 0x3b627c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B6278u, 0x3B6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6280u;
label_3b6280:
    // 0x3b6280: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6284:
    // 0x3b6284: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b6284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6288:
    // 0x3b6288: 0xc0ea12a  jal         func_3A84A8
label_3b628c:
    if (ctx->pc == 0x3B628Cu) {
        ctx->pc = 0x3B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6288u;
        // 0x3b628c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6290u;
        goto label_3b6290;
    }
    ctx->pc = 0x3B6288u;
    SET_GPR_U32(ctx, 31, 0x3B6290u);
    ctx->pc = 0x3B628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6288u;
    // 0x3b628c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B6288u, 0x3B6290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6290u;
label_3b6290:
    // 0x3b6290: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b6290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6294:
    // 0x3b6294: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b6294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6298:
    // 0x3b6298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b629c:
    // 0x3b629c: 0xc0ea12a  jal         func_3A84A8
label_3b62a0:
    if (ctx->pc == 0x3B62A0u) {
        ctx->pc = 0x3B62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B629Cu;
        // 0x3b62a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62A4u;
        goto label_3b62a4;
    }
    ctx->pc = 0x3B629Cu;
    SET_GPR_U32(ctx, 31, 0x3B62A4u);
    ctx->pc = 0x3B62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B629Cu;
    // 0x3b62a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B629Cu, 0x3B62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62A4u;
label_3b62a4:
    // 0x3b62a4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3b62a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b62a8:
    // 0x3b62a8: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x3b62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3b62ac:
    // 0x3b62ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3b62acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3b62b0:
    // 0x3b62b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b62b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b62b4:
    // 0x3b62b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3b62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3b62b8:
    // 0x3b62b8: 0xc0e858c  jal         func_3A1630
label_3b62bc:
    if (ctx->pc == 0x3B62BCu) {
        ctx->pc = 0x3B62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62B8u;
        // 0x3b62bc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62C0u;
        goto label_3b62c0;
    }
    ctx->pc = 0x3B62B8u;
    SET_GPR_U32(ctx, 31, 0x3B62C0u);
    ctx->pc = 0x3B62BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B62B8u;
    // 0x3b62bc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B62B8u, 0x3B62C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62C0u;
label_3b62c0:
    // 0x3b62c0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b62c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b62c4:
    // 0x3b62c4: 0x3c05ed8a  lui         $a1, 0xED8A
    ctx->pc = 0x3b62c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60810 << 16));
label_3b62c8:
    // 0x3b62c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b62c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b62cc:
    // 0x3b62cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b62ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b62d0:
    // 0x3b62d0: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3b62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3b62d4:
    // 0x3b62d4: 0x34a55ad4  ori         $a1, $a1, 0x5AD4
    ctx->pc = 0x3b62d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23252);
label_3b62d8:
    // 0x3b62d8: 0xc0e9132  jal         func_3A44C8
label_3b62dc:
    if (ctx->pc == 0x3B62DCu) {
        ctx->pc = 0x3B62DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62D8u;
        // 0x3b62dc: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62E0u;
        goto label_3b62e0;
    }
    ctx->pc = 0x3B62D8u;
    SET_GPR_U32(ctx, 31, 0x3B62E0u);
    ctx->pc = 0x3B62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B62D8u;
    // 0x3b62dc: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B62D8u, 0x3B62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62E0u;
label_3b62e0:
    // 0x3b62e0: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3b62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3b62e4:
    // 0x3b62e4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3b62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b62e8:
    // 0x3b62e8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b62e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b62ec:
    // 0x3b62ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b62f0:
    // 0x3b62f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3b62f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3b62f4:
    // 0x3b62f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b62f8:
    // 0x3b62f8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3b62fc:
    // 0x3b62fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b62fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6300:
    // 0x3b6300: 0xc0e9bb2  jal         func_3A6EC8
label_3b6304:
    if (ctx->pc == 0x3B6304u) {
        ctx->pc = 0x3B6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6300u;
        // 0x3b6304: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6308u;
        goto label_3b6308;
    }
    ctx->pc = 0x3B6300u;
    SET_GPR_U32(ctx, 31, 0x3B6308u);
    ctx->pc = 0x3B6304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6300u;
    // 0x3b6304: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B6300u, 0x3B6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6308u;
label_3b6308:
    // 0x3b6308: 0xae1500e0  sw          $s5, 0xE0($s0)
    ctx->pc = 0x3b6308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 21));
label_3b630c:
    // 0x3b630c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b6310:
    // 0x3b6310: 0xae1300d8  sw          $s3, 0xD8($s0)
    ctx->pc = 0x3b6310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 19));
label_3b6314:
    // 0x3b6314: 0xc0e927a  jal         func_3A49E8
label_3b6318:
    if (ctx->pc == 0x3B6318u) {
        ctx->pc = 0x3B6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6314u;
        // 0x3b6318: 0xae1400dc  sw          $s4, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B631Cu;
        goto label_3b631c;
    }
    ctx->pc = 0x3B6314u;
    SET_GPR_U32(ctx, 31, 0x3B631Cu);
    ctx->pc = 0x3B6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6314u;
    // 0x3b6318: 0xae1400dc  sw          $s4, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B6314u, 0x3B631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B631Cu;
label_3b631c:
    // 0x3b631c: 0xc0e927a  jal         func_3A49E8
label_3b6320:
    if (ctx->pc == 0x3B6320u) {
        ctx->pc = 0x3B6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B631Cu;
        // 0x3b6320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6324u;
        goto label_3b6324;
    }
    ctx->pc = 0x3B631Cu;
    SET_GPR_U32(ctx, 31, 0x3B6324u);
    ctx->pc = 0x3B6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B631Cu;
    // 0x3b6320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B631Cu, 0x3B6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6324u;
label_3b6324:
    // 0x3b6324: 0xc0e92cc  jal         func_3A4B30
label_3b6328:
    if (ctx->pc == 0x3B6328u) {
        ctx->pc = 0x3B6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6324u;
        // 0x3b6328: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B632Cu;
        goto label_3b632c;
    }
    ctx->pc = 0x3B6324u;
    SET_GPR_U32(ctx, 31, 0x3B632Cu);
    ctx->pc = 0x3B6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6324u;
    // 0x3b6328: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B30u, 0x3B6324u, 0x3B632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B632Cu;
label_3b632c:
    // 0x3b632c: 0xc0e91da  jal         func_3A4768
label_3b6330:
    if (ctx->pc == 0x3B6330u) {
        ctx->pc = 0x3B6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B632Cu;
        // 0x3b6330: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6334u;
        goto label_3b6334;
    }
    ctx->pc = 0x3B632Cu;
    SET_GPR_U32(ctx, 31, 0x3B6334u);
    ctx->pc = 0x3B6330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B632Cu;
    // 0x3b6330: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B632Cu, 0x3B6334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6334u;
label_3b6334:
    // 0x3b6334: 0xc0e91da  jal         func_3A4768
label_3b6338:
    if (ctx->pc == 0x3B6338u) {
        ctx->pc = 0x3B6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6334u;
        // 0x3b6338: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B633Cu;
        goto label_3b633c;
    }
    ctx->pc = 0x3B6334u;
    SET_GPR_U32(ctx, 31, 0x3B633Cu);
    ctx->pc = 0x3B6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6334u;
    // 0x3b6338: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B6334u, 0x3B633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B633Cu;
label_3b633c:
    // 0x3b633c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b6340:
    // 0x3b6340: 0xc0e9290  jal         func_3A4A40
label_3b6344:
    if (ctx->pc == 0x3B6344u) {
        ctx->pc = 0x3B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6340u;
        // 0x3b6344: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6348u;
        goto label_3b6348;
    }
    ctx->pc = 0x3B6340u;
    SET_GPR_U32(ctx, 31, 0x3B6348u);
    ctx->pc = 0x3B6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6340u;
    // 0x3b6344: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B6340u, 0x3B6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6348u;
label_3b6348:
    // 0x3b6348: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b6348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b634c:
    // 0x3b634c: 0xc0e9290  jal         func_3A4A40
label_3b6350:
    if (ctx->pc == 0x3B6350u) {
        ctx->pc = 0x3B6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B634Cu;
        // 0x3b6350: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6354u;
        goto label_3b6354;
    }
    ctx->pc = 0x3B634Cu;
    SET_GPR_U32(ctx, 31, 0x3B6354u);
    ctx->pc = 0x3B6350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B634Cu;
    // 0x3b6350: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B634Cu, 0x3B6354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6354u;
label_3b6354:
    // 0x3b6354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6358:
    // 0x3b6358: 0xc0e8dee  jal         func_3A37B8
label_3b635c:
    if (ctx->pc == 0x3B635Cu) {
        ctx->pc = 0x3B635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6358u;
        // 0x3b635c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6360u;
        goto label_3b6360;
    }
    ctx->pc = 0x3B6358u;
    SET_GPR_U32(ctx, 31, 0x3B6360u);
    ctx->pc = 0x3B635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6358u;
    // 0x3b635c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B6358u, 0x3B6360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6360u;
label_3b6360:
    // 0x3b6360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b6360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6364:
    // 0x3b6364: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b6364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b6368:
    // 0x3b6368: 0xc0e92a6  jal         func_3A4A98
label_3b636c:
    if (ctx->pc == 0x3B636Cu) {
        ctx->pc = 0x3B636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6368u;
        // 0x3b636c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6370u;
        goto label_3b6370;
    }
    ctx->pc = 0x3B6368u;
    SET_GPR_U32(ctx, 31, 0x3B6370u);
    ctx->pc = 0x3B636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6368u;
    // 0x3b636c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B6368u, 0x3B6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6370u;
label_3b6370:
    // 0x3b6370: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b6370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b6374:
    // 0x3b6374: 0xc0e92a6  jal         func_3A4A98
label_3b6378:
    if (ctx->pc == 0x3B6378u) {
        ctx->pc = 0x3B6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6374u;
        // 0x3b6378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B637Cu;
        goto label_3b637c;
    }
    ctx->pc = 0x3B6374u;
    SET_GPR_U32(ctx, 31, 0x3B637Cu);
    ctx->pc = 0x3B6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6374u;
    // 0x3b6378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B6374u, 0x3B637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B637Cu;
label_3b637c:
    // 0x3b637c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b637cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6380:
    // 0x3b6380: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b6380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b6384:
    // 0x3b6384: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b6384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6388:
    // 0x3b6388: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b6388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b638c:
    // 0x3b638c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b638cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b6390:
    // 0x3b6390: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b6390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b6394:
    // 0x3b6394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6398:
    // 0x3b6398: 0x3e00008  jr          $ra
label_3b639c:
    if (ctx->pc == 0x3B639Cu) {
        ctx->pc = 0x3B639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6398u;
        // 0x3b639c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63A0u;
        goto label_fallthrough_0x3b6398;
    }
    ctx->pc = 0x3B6398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6398u;
        // 0x3b639c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b6398:
    ctx->pc = 0x3B63A0u;
}
