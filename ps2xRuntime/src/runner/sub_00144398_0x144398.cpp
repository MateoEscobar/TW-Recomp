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

// Function: sub_00144398
// Address: 0x144398 - 0x1446d0
void sub_00144398_0x144398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144398_0x144398");
#endif

    switch (ctx->pc) {
        case 0x144398u: goto label_144398;
        case 0x14439cu: goto label_14439c;
        case 0x1443a0u: goto label_1443a0;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443a8u: goto label_1443a8;
        case 0x1443acu: goto label_1443ac;
        case 0x1443b0u: goto label_1443b0;
        case 0x1443b4u: goto label_1443b4;
        case 0x1443b8u: goto label_1443b8;
        case 0x1443bcu: goto label_1443bc;
        case 0x1443c0u: goto label_1443c0;
        case 0x1443c4u: goto label_1443c4;
        case 0x1443c8u: goto label_1443c8;
        case 0x1443ccu: goto label_1443cc;
        case 0x1443d0u: goto label_1443d0;
        case 0x1443d4u: goto label_1443d4;
        case 0x1443d8u: goto label_1443d8;
        case 0x1443dcu: goto label_1443dc;
        case 0x1443e0u: goto label_1443e0;
        case 0x1443e4u: goto label_1443e4;
        case 0x1443e8u: goto label_1443e8;
        case 0x1443ecu: goto label_1443ec;
        case 0x1443f0u: goto label_1443f0;
        case 0x1443f4u: goto label_1443f4;
        case 0x1443f8u: goto label_1443f8;
        case 0x1443fcu: goto label_1443fc;
        case 0x144400u: goto label_144400;
        case 0x144404u: goto label_144404;
        case 0x144408u: goto label_144408;
        case 0x14440cu: goto label_14440c;
        case 0x144410u: goto label_144410;
        case 0x144414u: goto label_144414;
        case 0x144418u: goto label_144418;
        case 0x14441cu: goto label_14441c;
        case 0x144420u: goto label_144420;
        case 0x144424u: goto label_144424;
        case 0x144428u: goto label_144428;
        case 0x14442cu: goto label_14442c;
        case 0x144430u: goto label_144430;
        case 0x144434u: goto label_144434;
        case 0x144438u: goto label_144438;
        case 0x14443cu: goto label_14443c;
        case 0x144440u: goto label_144440;
        case 0x144444u: goto label_144444;
        case 0x144448u: goto label_144448;
        case 0x14444cu: goto label_14444c;
        case 0x144450u: goto label_144450;
        case 0x144454u: goto label_144454;
        case 0x144458u: goto label_144458;
        case 0x14445cu: goto label_14445c;
        case 0x144460u: goto label_144460;
        case 0x144464u: goto label_144464;
        case 0x144468u: goto label_144468;
        case 0x14446cu: goto label_14446c;
        case 0x144470u: goto label_144470;
        case 0x144474u: goto label_144474;
        case 0x144478u: goto label_144478;
        case 0x14447cu: goto label_14447c;
        case 0x144480u: goto label_144480;
        case 0x144484u: goto label_144484;
        case 0x144488u: goto label_144488;
        case 0x14448cu: goto label_14448c;
        case 0x144490u: goto label_144490;
        case 0x144494u: goto label_144494;
        case 0x144498u: goto label_144498;
        case 0x14449cu: goto label_14449c;
        case 0x1444a0u: goto label_1444a0;
        case 0x1444a4u: goto label_1444a4;
        case 0x1444a8u: goto label_1444a8;
        case 0x1444acu: goto label_1444ac;
        case 0x1444b0u: goto label_1444b0;
        case 0x1444b4u: goto label_1444b4;
        case 0x1444b8u: goto label_1444b8;
        case 0x1444bcu: goto label_1444bc;
        case 0x1444c0u: goto label_1444c0;
        case 0x1444c4u: goto label_1444c4;
        case 0x1444c8u: goto label_1444c8;
        case 0x1444ccu: goto label_1444cc;
        case 0x1444d0u: goto label_1444d0;
        case 0x1444d4u: goto label_1444d4;
        case 0x1444d8u: goto label_1444d8;
        case 0x1444dcu: goto label_1444dc;
        case 0x1444e0u: goto label_1444e0;
        case 0x1444e4u: goto label_1444e4;
        case 0x1444e8u: goto label_1444e8;
        case 0x1444ecu: goto label_1444ec;
        case 0x1444f0u: goto label_1444f0;
        case 0x1444f4u: goto label_1444f4;
        case 0x1444f8u: goto label_1444f8;
        case 0x1444fcu: goto label_1444fc;
        case 0x144500u: goto label_144500;
        case 0x144504u: goto label_144504;
        case 0x144508u: goto label_144508;
        case 0x14450cu: goto label_14450c;
        case 0x144510u: goto label_144510;
        case 0x144514u: goto label_144514;
        case 0x144518u: goto label_144518;
        case 0x14451cu: goto label_14451c;
        case 0x144520u: goto label_144520;
        case 0x144524u: goto label_144524;
        case 0x144528u: goto label_144528;
        case 0x14452cu: goto label_14452c;
        case 0x144530u: goto label_144530;
        case 0x144534u: goto label_144534;
        case 0x144538u: goto label_144538;
        case 0x14453cu: goto label_14453c;
        case 0x144540u: goto label_144540;
        case 0x144544u: goto label_144544;
        case 0x144548u: goto label_144548;
        case 0x14454cu: goto label_14454c;
        case 0x144550u: goto label_144550;
        case 0x144554u: goto label_144554;
        case 0x144558u: goto label_144558;
        case 0x14455cu: goto label_14455c;
        case 0x144560u: goto label_144560;
        case 0x144564u: goto label_144564;
        case 0x144568u: goto label_144568;
        case 0x14456cu: goto label_14456c;
        case 0x144570u: goto label_144570;
        case 0x144574u: goto label_144574;
        case 0x144578u: goto label_144578;
        case 0x14457cu: goto label_14457c;
        case 0x144580u: goto label_144580;
        case 0x144584u: goto label_144584;
        case 0x144588u: goto label_144588;
        case 0x14458cu: goto label_14458c;
        case 0x144590u: goto label_144590;
        case 0x144594u: goto label_144594;
        case 0x144598u: goto label_144598;
        case 0x14459cu: goto label_14459c;
        case 0x1445a0u: goto label_1445a0;
        case 0x1445a4u: goto label_1445a4;
        case 0x1445a8u: goto label_1445a8;
        case 0x1445acu: goto label_1445ac;
        case 0x1445b0u: goto label_1445b0;
        case 0x1445b4u: goto label_1445b4;
        case 0x1445b8u: goto label_1445b8;
        case 0x1445bcu: goto label_1445bc;
        case 0x1445c0u: goto label_1445c0;
        case 0x1445c4u: goto label_1445c4;
        case 0x1445c8u: goto label_1445c8;
        case 0x1445ccu: goto label_1445cc;
        case 0x1445d0u: goto label_1445d0;
        case 0x1445d4u: goto label_1445d4;
        case 0x1445d8u: goto label_1445d8;
        case 0x1445dcu: goto label_1445dc;
        case 0x1445e0u: goto label_1445e0;
        case 0x1445e4u: goto label_1445e4;
        case 0x1445e8u: goto label_1445e8;
        case 0x1445ecu: goto label_1445ec;
        case 0x1445f0u: goto label_1445f0;
        case 0x1445f4u: goto label_1445f4;
        case 0x1445f8u: goto label_1445f8;
        case 0x1445fcu: goto label_1445fc;
        case 0x144600u: goto label_144600;
        case 0x144604u: goto label_144604;
        case 0x144608u: goto label_144608;
        case 0x14460cu: goto label_14460c;
        case 0x144610u: goto label_144610;
        case 0x144614u: goto label_144614;
        case 0x144618u: goto label_144618;
        case 0x14461cu: goto label_14461c;
        case 0x144620u: goto label_144620;
        case 0x144624u: goto label_144624;
        case 0x144628u: goto label_144628;
        case 0x14462cu: goto label_14462c;
        case 0x144630u: goto label_144630;
        case 0x144634u: goto label_144634;
        case 0x144638u: goto label_144638;
        case 0x14463cu: goto label_14463c;
        case 0x144640u: goto label_144640;
        case 0x144644u: goto label_144644;
        case 0x144648u: goto label_144648;
        case 0x14464cu: goto label_14464c;
        case 0x144650u: goto label_144650;
        case 0x144654u: goto label_144654;
        case 0x144658u: goto label_144658;
        case 0x14465cu: goto label_14465c;
        case 0x144660u: goto label_144660;
        case 0x144664u: goto label_144664;
        case 0x144668u: goto label_144668;
        case 0x14466cu: goto label_14466c;
        case 0x144670u: goto label_144670;
        case 0x144674u: goto label_144674;
        case 0x144678u: goto label_144678;
        case 0x14467cu: goto label_14467c;
        case 0x144680u: goto label_144680;
        case 0x144684u: goto label_144684;
        case 0x144688u: goto label_144688;
        case 0x14468cu: goto label_14468c;
        case 0x144690u: goto label_144690;
        case 0x144694u: goto label_144694;
        case 0x144698u: goto label_144698;
        case 0x14469cu: goto label_14469c;
        case 0x1446a0u: goto label_1446a0;
        case 0x1446a4u: goto label_1446a4;
        case 0x1446a8u: goto label_1446a8;
        case 0x1446acu: goto label_1446ac;
        case 0x1446b0u: goto label_1446b0;
        case 0x1446b4u: goto label_1446b4;
        case 0x1446b8u: goto label_1446b8;
        case 0x1446bcu: goto label_1446bc;
        case 0x1446c0u: goto label_1446c0;
        case 0x1446c4u: goto label_1446c4;
        case 0x1446c8u: goto label_1446c8;
        case 0x1446ccu: goto label_1446cc;
        default: break;
    }

    ctx->pc = 0x144398u;

label_144398:
    // 0x144398: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x144398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_14439c:
    // 0x14439c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1443a0:
    // 0x1443a0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1443a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1443a4:
    // 0x1443a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1443a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1443a8:
    // 0x1443a8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1443a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1443ac:
    // 0x1443ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1443acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1443b0:
    // 0x1443b0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1443b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1443b4:
    // 0x1443b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1443b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1443b8:
    // 0x1443b8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1443b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1443bc:
    // 0x1443bc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1443bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1443c0:
    // 0x1443c0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1443c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1443c4:
    // 0x1443c4: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1443c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1443c8:
    // 0x1443c8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1443c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1443cc:
    // 0x1443cc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1443ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1443d0:
    // 0x1443d0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1443d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1443d4:
    // 0x1443d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1443d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1443d8:
    // 0x1443d8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1443dc:
    // 0x1443dc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1443e0:
    // 0x1443e0: 0x60f809  jalr        $v1
label_1443e4:
    if (ctx->pc == 0x1443E4u) {
        ctx->pc = 0x1443E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443E0u;
        // 0x1443e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443E8u;
        goto label_1443e8;
    }
    ctx->pc = 0x1443E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1443E8u);
        ctx->pc = 0x1443E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443E0u;
        // 0x1443e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1443E0u, 0x1443E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1443E8u;
label_1443e8:
    // 0x1443e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1443e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1443ec:
    // 0x1443ec: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_1443f0:
    if (ctx->pc == 0x1443F0u) {
        ctx->pc = 0x1443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443ECu;
        // 0x1443f0: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443F4u;
        goto label_1443f4;
    }
    ctx->pc = 0x1443ECu;
    {
        const bool branch_taken_0x1443ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443ECu;
        // 0x1443f0: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1443ec) {
            ctx->pc = 0x14468Cu;
            goto label_14468c;
        }
    }
    ctx->pc = 0x1443F4u;
label_1443f4:
    // 0x1443f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1443f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1443f8:
    // 0x1443f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1443f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1443fc:
    // 0x1443fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1443fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_144400:
    // 0x144400: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x144400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_144404:
    // 0x144404: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x144404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_144408:
    // 0x144408: 0x60f809  jalr        $v1
label_14440c:
    if (ctx->pc == 0x14440Cu) {
        ctx->pc = 0x14440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144408u;
        // 0x14440c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144410u;
        goto label_144410;
    }
    ctx->pc = 0x144408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144410u);
        ctx->pc = 0x14440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144408u;
        // 0x14440c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144408u, 0x144410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144410u;
label_144410:
    // 0x144410: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x144410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_144414:
    // 0x144414: 0x10a0009c  beqz        $a1, . + 4 + (0x9C << 2)
label_144418:
    if (ctx->pc == 0x144418u) {
        ctx->pc = 0x144418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144414u;
        // 0x144418: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14441Cu;
        goto label_14441c;
    }
    ctx->pc = 0x144414u;
    {
        const bool branch_taken_0x144414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144414u;
        // 0x144418: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144414) {
            ctx->pc = 0x144688u;
            goto label_144688;
        }
    }
    ctx->pc = 0x14441Cu;
label_14441c:
    // 0x14441c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_144420:
    // 0x144420: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x144420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_144424:
    // 0x144424: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x144424u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144428:
    // 0x144428: 0xc061844  jal         func_186110
label_14442c:
    if (ctx->pc == 0x14442Cu) {
        ctx->pc = 0x14442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144428u;
        // 0x14442c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144430u;
        goto label_144430;
    }
    ctx->pc = 0x144428u;
    SET_GPR_U32(ctx, 31, 0x144430u);
    ctx->pc = 0x14442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144428u;
    // 0x14442c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186110u, 0x144428u, 0x144430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144430u;
label_144430:
    // 0x144430: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_144434:
    if (ctx->pc == 0x144434u) {
        ctx->pc = 0x144434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144430u;
        // 0x144434: 0x93a2005b  lbu         $v0, 0x5B($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 91)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144438u;
        goto label_144438;
    }
    ctx->pc = 0x144430u;
    {
        const bool branch_taken_0x144430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144430u;
        // 0x144434: 0x93a2005b  lbu         $v0, 0x5B($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 91)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144430) {
            ctx->pc = 0x144458u;
            goto label_144458;
        }
    }
    ctx->pc = 0x144438u;
label_144438:
    // 0x144438: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_14443c:
    if (ctx->pc == 0x14443Cu) {
        ctx->pc = 0x14443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144438u;
        // 0x14443c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144440u;
        goto label_144440;
    }
    ctx->pc = 0x144438u;
    {
        const bool branch_taken_0x144438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144438) {
            ctx->pc = 0x14443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144438u;
            // 0x14443c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14445Cu;
            goto label_14445c;
        }
    }
    ctx->pc = 0x144440u;
label_144440:
    // 0x144440: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x144440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_144444:
    // 0x144444: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x144444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
label_144448:
    // 0x144448: 0xc06223c  jal         func_1888F0
label_14444c:
    if (ctx->pc == 0x14444Cu) {
        ctx->pc = 0x14444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144448u;
        // 0x14444c: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144450u;
        goto label_144450;
    }
    ctx->pc = 0x144448u;
    SET_GPR_U32(ctx, 31, 0x144450u);
    ctx->pc = 0x14444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144448u;
    // 0x14444c: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x144448u, 0x144450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144450u;
label_144450:
    // 0x144450: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_144454:
    if (ctx->pc == 0x144454u) {
        ctx->pc = 0x144458u;
        goto label_144458;
    }
    ctx->pc = 0x144450u;
    {
        const bool branch_taken_0x144450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144450) {
            ctx->pc = 0x14445Cu;
            goto label_14445c;
        }
    }
    ctx->pc = 0x144458u;
label_144458:
    // 0x144458: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x144458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14445c:
    // 0x14445c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_144460:
    if (ctx->pc == 0x144460u) {
        ctx->pc = 0x144460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14445Cu;
        // 0x144460: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144464u;
        goto label_144464;
    }
    ctx->pc = 0x14445Cu;
    {
        const bool branch_taken_0x14445c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14445c) {
            ctx->pc = 0x144460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14445Cu;
            // 0x144460: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144474u;
            goto label_144474;
        }
    }
    ctx->pc = 0x144464u;
label_144464:
    // 0x144464: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_144468:
    // 0x144468: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_14446c:
    if (ctx->pc == 0x14446Cu) {
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x8fc4cd4c  lw          $a0, -0x32B4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144470u;
        goto label_144470;
    }
    ctx->pc = 0x144468u;
    {
        const bool branch_taken_0x144468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x8fc4cd4c  lw          $a0, -0x32B4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144468) {
            ctx->pc = 0x1444F8u;
            goto label_1444f8;
        }
    }
    ctx->pc = 0x144470u;
label_144470:
    // 0x144470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x144470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_144474:
    // 0x144474: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x144474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_144478:
    // 0x144478: 0xafb1007c  sw          $s1, 0x7C($sp)
    ctx->pc = 0x144478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 17));
label_14447c:
    // 0x14447c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_144480:
    if (ctx->pc == 0x144480u) {
        ctx->pc = 0x144480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14447Cu;
        // 0x144480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144484u;
        goto label_144484;
    }
    ctx->pc = 0x14447Cu;
    {
        const bool branch_taken_0x14447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14447Cu;
        // 0x144480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14447c) {
            ctx->pc = 0x144674u;
            goto label_144674;
        }
    }
    ctx->pc = 0x144484u;
label_144484:
    // 0x144484: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x144484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_144488:
    // 0x144488: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14448c:
    // 0x14448c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14448cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_144490:
    // 0x144490: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x144490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_144494:
    // 0x144494: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x144494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_144498:
    // 0x144498: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14449c:
    // 0x14449c: 0x60f809  jalr        $v1
label_1444a0:
    if (ctx->pc == 0x1444A0u) {
        ctx->pc = 0x1444A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14449Cu;
        // 0x1444a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444A4u;
        goto label_1444a4;
    }
    ctx->pc = 0x14449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1444A4u);
        ctx->pc = 0x1444A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14449Cu;
        // 0x1444a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14449Cu, 0x1444A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1444A4u;
label_1444a4:
    // 0x1444a4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1444a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1444a8:
    // 0x1444a8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1444a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_1444ac:
    // 0x1444ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1444b0:
    if (ctx->pc == 0x1444B0u) {
        ctx->pc = 0x1444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444ACu;
        // 0x1444b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444B4u;
        goto label_1444b4;
    }
    ctx->pc = 0x1444ACu;
    {
        const bool branch_taken_0x1444ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444ACu;
        // 0x1444b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444ac) {
            ctx->pc = 0x1444DCu;
            goto label_1444dc;
        }
    }
    ctx->pc = 0x1444B4u;
label_1444b4:
    // 0x1444b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1444b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1444b8:
    // 0x1444b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1444bc:
    // 0x1444bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1444bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1444c0:
    // 0x1444c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1444c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1444c4:
    // 0x1444c4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1444c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1444c8:
    // 0x1444c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1444c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1444cc:
    // 0x1444cc: 0x60f809  jalr        $v1
label_1444d0:
    if (ctx->pc == 0x1444D0u) {
        ctx->pc = 0x1444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444CCu;
        // 0x1444d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444D4u;
        goto label_1444d4;
    }
    ctx->pc = 0x1444CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1444D4u);
        ctx->pc = 0x1444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444CCu;
        // 0x1444d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1444CCu, 0x1444D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1444D4u;
label_1444d4:
    // 0x1444d4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1444d8:
    if (ctx->pc == 0x1444D8u) {
        ctx->pc = 0x1444D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444D4u;
        // 0x1444d8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444DCu;
        goto label_1444dc;
    }
    ctx->pc = 0x1444D4u;
    {
        const bool branch_taken_0x1444d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1444d4) {
            ctx->pc = 0x1444D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1444D4u;
            // 0x1444d8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1444B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1444b8;
        }
    }
    ctx->pc = 0x1444DCu;
label_1444dc:
    // 0x1444dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1444dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1444e0:
    // 0x1444e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1444e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1444e4:
    // 0x1444e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1444e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1444e8:
    // 0x1444e8: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
label_1444ec:
    if (ctx->pc == 0x1444ECu) {
        ctx->pc = 0x1444ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444E8u;
        // 0x1444ec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444F0u;
        goto label_1444f0;
    }
    ctx->pc = 0x1444E8u;
    {
        const bool branch_taken_0x1444e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1444e8) {
            ctx->pc = 0x1444ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1444E8u;
            // 0x1444ec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144488;
        }
    }
    ctx->pc = 0x1444F0u;
label_1444f0:
    // 0x1444f0: 0x10000061  b           . + 4 + (0x61 << 2)
label_1444f4:
    if (ctx->pc == 0x1444F4u) {
        ctx->pc = 0x1444F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444F0u;
        // 0x1444f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444F8u;
        goto label_1444f8;
    }
    ctx->pc = 0x1444F0u;
    {
        const bool branch_taken_0x1444f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1444F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444F0u;
        // 0x1444f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444f0) {
            ctx->pc = 0x144678u;
            goto label_144678;
        }
    }
    ctx->pc = 0x1444F8u;
label_1444f8:
    // 0x1444f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1444f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1444fc:
    // 0x1444fc: 0x27a60074  addiu       $a2, $sp, 0x74
    ctx->pc = 0x1444fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_144500:
    // 0x144500: 0xc061ba2  jal         func_186E88
label_144504:
    if (ctx->pc == 0x144504u) {
        ctx->pc = 0x144504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144500u;
        // 0x144504: 0x27a70078  addiu       $a3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144508u;
        goto label_144508;
    }
    ctx->pc = 0x144500u;
    SET_GPR_U32(ctx, 31, 0x144508u);
    ctx->pc = 0x144504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144500u;
    // 0x144504: 0x27a70078  addiu       $a3, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E88u, 0x144500u, 0x144508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144508u;
label_144508:
    // 0x144508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x144508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14450c:
    // 0x14450c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_144510:
    // 0x144510: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x144510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144514:
    // 0x144514: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_144518:
    if (ctx->pc == 0x144518u) {
        ctx->pc = 0x144518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144514u;
        // 0x144518: 0xafb1007c  sw          $s1, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14451Cu;
        goto label_14451c;
    }
    ctx->pc = 0x144514u;
    {
        const bool branch_taken_0x144514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144514u;
        // 0x144518: 0xafb1007c  sw          $s1, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144514) {
            ctx->pc = 0x144660u;
            goto label_144660;
        }
    }
    ctx->pc = 0x14451Cu;
label_14451c:
    // 0x14451c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_144520:
    // 0x144520: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x144520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_144524:
    // 0x144524: 0x2457b2e0  addiu       $s7, $v0, -0x4D20
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
label_144528:
    // 0x144528: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x144528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14452c:
    // 0x14452c: 0x0  nop
    ctx->pc = 0x14452cu;
    // NOP
label_144530:
    // 0x144530: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x144530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_144534:
    // 0x144534: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x144534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_144538:
    // 0x144538: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x144538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_14453c:
    // 0x14453c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x14453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_144540:
    // 0x144540: 0x60f809  jalr        $v1
label_144544:
    if (ctx->pc == 0x144544u) {
        ctx->pc = 0x144544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144540u;
        // 0x144544: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144548u;
        goto label_144548;
    }
    ctx->pc = 0x144540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144548u);
        ctx->pc = 0x144544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144540u;
        // 0x144544: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144540u, 0x144548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144548u;
label_144548:
    // 0x144548: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x144548u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14454c:
    // 0x14454c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_144550:
    // 0x144550: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x144550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_144554:
    // 0x144554: 0x2e41821  addu        $v1, $s7, $a0
    ctx->pc = 0x144554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_144558:
    // 0x144558: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x144558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14455c:
    // 0x14455c: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x14455cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_144560:
    // 0x144560: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
label_144564:
    if (ctx->pc == 0x144564u) {
        ctx->pc = 0x144564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144560u;
        // 0x144564: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144568u;
        goto label_144568;
    }
    ctx->pc = 0x144560u;
    {
        const bool branch_taken_0x144560 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x144564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144560u;
        // 0x144564: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144560) {
            ctx->pc = 0x1445E8u;
            goto label_1445e8;
        }
    }
    ctx->pc = 0x144568u;
label_144568:
    // 0x144568: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x144568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_14456c:
    // 0x14456c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
label_144570:
    if (ctx->pc == 0x144570u) {
        ctx->pc = 0x144570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14456Cu;
        // 0x144570: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144574u;
        goto label_144574;
    }
    ctx->pc = 0x14456Cu;
    {
        const bool branch_taken_0x14456c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x144570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14456Cu;
        // 0x144570: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14456c) {
            ctx->pc = 0x1445D4u;
            goto label_1445d4;
        }
    }
    ctx->pc = 0x144574u;
label_144574:
    // 0x144574: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x144574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_144578:
    // 0x144578: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x144578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_14457c:
    // 0x14457c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x14457cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_144580:
    // 0x144580: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x144580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_144584:
    // 0x144584: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x144584u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_144588:
    // 0x144588: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x144588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_14458c:
    // 0x14458c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_144590:
    // 0x144590: 0x24459b10  addiu       $a1, $v0, -0x64F0
    ctx->pc = 0x144590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
label_144594:
    // 0x144594: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x144594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_144598:
    // 0x144598: 0x2409018b  addiu       $t1, $zero, 0x18B
    ctx->pc = 0x144598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
label_14459c:
    // 0x14459c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x14459cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1445a0:
    // 0x1445a0: 0x24489b18  addiu       $t0, $v0, -0x64E8
    ctx->pc = 0x1445a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941464));
label_1445a4:
    // 0x1445a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1445a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1445a8:
    // 0x1445a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1445a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1445ac:
    // 0x1445ac: 0x40f809  jalr        $v0
label_1445b0:
    if (ctx->pc == 0x1445B0u) {
        ctx->pc = 0x1445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ACu;
        // 0x1445b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445B4u;
        goto label_1445b4;
    }
    ctx->pc = 0x1445ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1445B4u);
        ctx->pc = 0x1445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ACu;
        // 0x1445b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1445ACu, 0x1445B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1445B4u;
label_1445b4:
    // 0x1445b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1445b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1445b8:
    // 0x1445b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1445b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1445bc:
    // 0x1445bc: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x1445bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1445c0:
    // 0x1445c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1445c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1445c4:
    // 0x1445c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1445c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1445c8:
    // 0x1445c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1445c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1445cc:
    // 0x1445cc: 0x40f809  jalr        $v0
label_1445d0:
    if (ctx->pc == 0x1445D0u) {
        ctx->pc = 0x1445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445CCu;
        // 0x1445d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445D4u;
        goto label_1445d4;
    }
    ctx->pc = 0x1445CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1445D4u);
        ctx->pc = 0x1445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445CCu;
        // 0x1445d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1445CCu, 0x1445D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1445D4u;
label_1445d4:
    // 0x1445d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1445d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1445d8:
    // 0x1445d8: 0xc051052  jal         func_144148
label_1445dc:
    if (ctx->pc == 0x1445DCu) {
        ctx->pc = 0x1445DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445D8u;
        // 0x1445dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445E0u;
        goto label_1445e0;
    }
    ctx->pc = 0x1445D8u;
    SET_GPR_U32(ctx, 31, 0x1445E0u);
    ctx->pc = 0x1445DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445D8u;
    // 0x1445dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x1445D8u, 0x1445E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445E0u;
label_1445e0:
    // 0x1445e0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1445e4:
    if (ctx->pc == 0x1445E4u) {
        ctx->pc = 0x1445E8u;
        goto label_1445e8;
    }
    ctx->pc = 0x1445E0u;
    {
        const bool branch_taken_0x1445e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1445e0) {
            ctx->pc = 0x14463Cu;
            goto label_14463c;
        }
    }
    ctx->pc = 0x1445E8u;
label_1445e8:
    // 0x1445e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1445ec:
    // 0x1445ec: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1445ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1445f0:
    // 0x1445f0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1445f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1445f4:
    // 0x1445f4: 0x40f809  jalr        $v0
label_1445f8:
    if (ctx->pc == 0x1445F8u) {
        ctx->pc = 0x1445F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445F4u;
        // 0x1445f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445FCu;
        goto label_1445fc;
    }
    ctx->pc = 0x1445F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1445FCu);
        ctx->pc = 0x1445F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445F4u;
        // 0x1445f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1445F4u, 0x1445FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1445FCu;
label_1445fc:
    // 0x1445fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1445fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144600:
    // 0x144600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144604:
    // 0x144604: 0x220f809  jalr        $s1
label_144608:
    if (ctx->pc == 0x144608u) {
        ctx->pc = 0x144608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144604u;
        // 0x144608: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14460Cu;
        goto label_14460c;
    }
    ctx->pc = 0x144604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x14460Cu);
        ctx->pc = 0x144608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144604u;
        // 0x144608: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144604u, 0x14460Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14460Cu;
label_14460c:
    // 0x14460c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_144610:
    // 0x144610: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x144610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_144614:
    // 0x144614: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x144614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_144618:
    // 0x144618: 0x40f809  jalr        $v0
label_14461c:
    if (ctx->pc == 0x14461Cu) {
        ctx->pc = 0x14461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144618u;
        // 0x14461c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144620u;
        goto label_144620;
    }
    ctx->pc = 0x144618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144620u);
        ctx->pc = 0x14461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144618u;
        // 0x14461c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144618u, 0x144620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144620u;
label_144620:
    // 0x144620: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x144620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_144624:
    // 0x144624: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x144624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_144628:
    // 0x144628: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14462c:
    // 0x14462c: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_144630:
    if (ctx->pc == 0x144630u) {
        ctx->pc = 0x144634u;
        goto label_144634;
    }
    ctx->pc = 0x14462Cu;
    {
        const bool branch_taken_0x14462c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x14462c) {
            ctx->pc = 0x14463Cu;
            goto label_14463c;
        }
    }
    ctx->pc = 0x144634u;
label_144634:
    // 0x144634: 0xc055110  jal         func_154440
label_144638:
    if (ctx->pc == 0x144638u) {
        ctx->pc = 0x144638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144634u;
        // 0x144638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14463Cu;
        goto label_14463c;
    }
    ctx->pc = 0x144634u;
    SET_GPR_U32(ctx, 31, 0x14463Cu);
    ctx->pc = 0x144638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144634u;
    // 0x144638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154440u, 0x144634u, 0x14463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14463Cu;
label_14463c:
    // 0x14463c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_144640:
    if (ctx->pc == 0x144640u) {
        ctx->pc = 0x144640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14463Cu;
        // 0x144640: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144644u;
        goto label_144644;
    }
    ctx->pc = 0x14463Cu;
    {
        const bool branch_taken_0x14463c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x144640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14463Cu;
        // 0x144640: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14463c) {
            ctx->pc = 0x144650u;
            goto label_144650;
        }
    }
    ctx->pc = 0x144644u;
label_144644:
    // 0x144644: 0x280f809  jalr        $s4
label_144648:
    if (ctx->pc == 0x144648u) {
        ctx->pc = 0x14464Cu;
        goto label_14464c;
    }
    ctx->pc = 0x144644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x14464Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144644u, 0x14464Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14464Cu;
label_14464c:
    // 0x14464c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_144650:
    // 0x144650: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x144650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_144654:
    // 0x144654: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x144654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_144658:
    // 0x144658: 0x5440ffb5  bnel        $v0, $zero, . + 4 + (-0x4B << 2)
label_14465c:
    if (ctx->pc == 0x14465Cu) {
        ctx->pc = 0x14465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144658u;
        // 0x14465c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144660u;
        goto label_144660;
    }
    ctx->pc = 0x144658u;
    {
        const bool branch_taken_0x144658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144658) {
            ctx->pc = 0x14465Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144658u;
            // 0x14465c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144530;
        }
    }
    ctx->pc = 0x144660u;
label_144660:
    // 0x144660: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x144660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
label_144664:
    // 0x144664: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x144664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_144668:
    // 0x144668: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x144668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_14466c:
    // 0x14466c: 0xc061bfc  jal         func_186FF0
label_144670:
    if (ctx->pc == 0x144670u) {
        ctx->pc = 0x144670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14466Cu;
        // 0x144670: 0x8fa70078  lw          $a3, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144674u;
        goto label_144674;
    }
    ctx->pc = 0x14466Cu;
    SET_GPR_U32(ctx, 31, 0x144674u);
    ctx->pc = 0x144670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14466Cu;
    // 0x144670: 0x8fa70078  lw          $a3, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FF0u, 0x14466Cu, 0x144674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144674u;
label_144674:
    // 0x144674: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_144678:
    // 0x144678: 0x8fb1007c  lw          $s1, 0x7C($sp)
    ctx->pc = 0x144678u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_14467c:
    // 0x14467c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x14467cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_144680:
    // 0x144680: 0x5440ff5d  bnel        $v0, $zero, . + 4 + (-0xA3 << 2)
label_144684:
    if (ctx->pc == 0x144684u) {
        ctx->pc = 0x144684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144680u;
        // 0x144684: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144688u;
        goto label_144688;
    }
    ctx->pc = 0x144680u;
    {
        const bool branch_taken_0x144680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144680) {
            ctx->pc = 0x144684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144680u;
            // 0x144684: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1443F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1443f8;
        }
    }
    ctx->pc = 0x144688u;
label_144688:
    // 0x144688: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x144688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_14468c:
    // 0x14468c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x14468cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_144690:
    // 0x144690: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x144690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_144694:
    // 0x144694: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x144694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_144698:
    // 0x144698: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x144698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_14469c:
    // 0x14469c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x14469cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1446a0:
    // 0x1446a0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1446a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1446a4:
    // 0x1446a4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1446a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1446a8:
    // 0x1446a8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1446a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1446ac:
    // 0x1446ac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1446acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1446b0:
    // 0x1446b0: 0x3e00008  jr          $ra
label_1446b4:
    if (ctx->pc == 0x1446B4u) {
        ctx->pc = 0x1446B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446B0u;
        // 0x1446b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446B8u;
        goto label_1446b8;
    }
    ctx->pc = 0x1446B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1446B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446B0u;
        // 0x1446b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1446B8u;
label_1446b8:
    // 0x1446b8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1446b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1446bc:
    // 0x1446bc: 0x0  nop
    ctx->pc = 0x1446bcu;
    // NOP
label_1446c0:
    // 0x1446c0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1446c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1446c4:
    // 0x1446c4: 0x0  nop
    ctx->pc = 0x1446c4u;
    // NOP
label_1446c8:
    // 0x1446c8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1446c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1446cc:
    // 0x1446cc: 0x0  nop
    ctx->pc = 0x1446ccu;
    // NOP
    ctx->pc = 0x1446d0u;
}
