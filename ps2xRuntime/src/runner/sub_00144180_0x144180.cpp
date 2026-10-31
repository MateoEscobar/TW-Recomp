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

// Function: sub_00144180
// Address: 0x144180 - 0x144348
void sub_00144180_0x144180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144180_0x144180");
#endif

    switch (ctx->pc) {
        case 0x144180u: goto label_144180;
        case 0x144184u: goto label_144184;
        case 0x144188u: goto label_144188;
        case 0x14418cu: goto label_14418c;
        case 0x144190u: goto label_144190;
        case 0x144194u: goto label_144194;
        case 0x144198u: goto label_144198;
        case 0x14419cu: goto label_14419c;
        case 0x1441a0u: goto label_1441a0;
        case 0x1441a4u: goto label_1441a4;
        case 0x1441a8u: goto label_1441a8;
        case 0x1441acu: goto label_1441ac;
        case 0x1441b0u: goto label_1441b0;
        case 0x1441b4u: goto label_1441b4;
        case 0x1441b8u: goto label_1441b8;
        case 0x1441bcu: goto label_1441bc;
        case 0x1441c0u: goto label_1441c0;
        case 0x1441c4u: goto label_1441c4;
        case 0x1441c8u: goto label_1441c8;
        case 0x1441ccu: goto label_1441cc;
        case 0x1441d0u: goto label_1441d0;
        case 0x1441d4u: goto label_1441d4;
        case 0x1441d8u: goto label_1441d8;
        case 0x1441dcu: goto label_1441dc;
        case 0x1441e0u: goto label_1441e0;
        case 0x1441e4u: goto label_1441e4;
        case 0x1441e8u: goto label_1441e8;
        case 0x1441ecu: goto label_1441ec;
        case 0x1441f0u: goto label_1441f0;
        case 0x1441f4u: goto label_1441f4;
        case 0x1441f8u: goto label_1441f8;
        case 0x1441fcu: goto label_1441fc;
        case 0x144200u: goto label_144200;
        case 0x144204u: goto label_144204;
        case 0x144208u: goto label_144208;
        case 0x14420cu: goto label_14420c;
        case 0x144210u: goto label_144210;
        case 0x144214u: goto label_144214;
        case 0x144218u: goto label_144218;
        case 0x14421cu: goto label_14421c;
        case 0x144220u: goto label_144220;
        case 0x144224u: goto label_144224;
        case 0x144228u: goto label_144228;
        case 0x14422cu: goto label_14422c;
        case 0x144230u: goto label_144230;
        case 0x144234u: goto label_144234;
        case 0x144238u: goto label_144238;
        case 0x14423cu: goto label_14423c;
        case 0x144240u: goto label_144240;
        case 0x144244u: goto label_144244;
        case 0x144248u: goto label_144248;
        case 0x14424cu: goto label_14424c;
        case 0x144250u: goto label_144250;
        case 0x144254u: goto label_144254;
        case 0x144258u: goto label_144258;
        case 0x14425cu: goto label_14425c;
        case 0x144260u: goto label_144260;
        case 0x144264u: goto label_144264;
        case 0x144268u: goto label_144268;
        case 0x14426cu: goto label_14426c;
        case 0x144270u: goto label_144270;
        case 0x144274u: goto label_144274;
        case 0x144278u: goto label_144278;
        case 0x14427cu: goto label_14427c;
        case 0x144280u: goto label_144280;
        case 0x144284u: goto label_144284;
        case 0x144288u: goto label_144288;
        case 0x14428cu: goto label_14428c;
        case 0x144290u: goto label_144290;
        case 0x144294u: goto label_144294;
        case 0x144298u: goto label_144298;
        case 0x14429cu: goto label_14429c;
        case 0x1442a0u: goto label_1442a0;
        case 0x1442a4u: goto label_1442a4;
        case 0x1442a8u: goto label_1442a8;
        case 0x1442acu: goto label_1442ac;
        case 0x1442b0u: goto label_1442b0;
        case 0x1442b4u: goto label_1442b4;
        case 0x1442b8u: goto label_1442b8;
        case 0x1442bcu: goto label_1442bc;
        case 0x1442c0u: goto label_1442c0;
        case 0x1442c4u: goto label_1442c4;
        case 0x1442c8u: goto label_1442c8;
        case 0x1442ccu: goto label_1442cc;
        case 0x1442d0u: goto label_1442d0;
        case 0x1442d4u: goto label_1442d4;
        case 0x1442d8u: goto label_1442d8;
        case 0x1442dcu: goto label_1442dc;
        case 0x1442e0u: goto label_1442e0;
        case 0x1442e4u: goto label_1442e4;
        case 0x1442e8u: goto label_1442e8;
        case 0x1442ecu: goto label_1442ec;
        case 0x1442f0u: goto label_1442f0;
        case 0x1442f4u: goto label_1442f4;
        case 0x1442f8u: goto label_1442f8;
        case 0x1442fcu: goto label_1442fc;
        case 0x144300u: goto label_144300;
        case 0x144304u: goto label_144304;
        case 0x144308u: goto label_144308;
        case 0x14430cu: goto label_14430c;
        case 0x144310u: goto label_144310;
        case 0x144314u: goto label_144314;
        case 0x144318u: goto label_144318;
        case 0x14431cu: goto label_14431c;
        case 0x144320u: goto label_144320;
        case 0x144324u: goto label_144324;
        case 0x144328u: goto label_144328;
        case 0x14432cu: goto label_14432c;
        case 0x144330u: goto label_144330;
        case 0x144334u: goto label_144334;
        case 0x144338u: goto label_144338;
        case 0x14433cu: goto label_14433c;
        case 0x144340u: goto label_144340;
        case 0x144344u: goto label_144344;
        default: break;
    }

    ctx->pc = 0x144180u;

label_144180:
    // 0x144180: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x144180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_144184:
    // 0x144184: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x144184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_144188:
    // 0x144188: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x144188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_14418c:
    // 0x14418c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14418cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144190:
    // 0x144190: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x144190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_144194:
    // 0x144194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_144198:
    // 0x144198: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x144198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_14419c:
    // 0x14419c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14419cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1441a0:
    // 0x1441a0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1441a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1441a4:
    // 0x1441a4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1441a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1441a8:
    // 0x1441a8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1441a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1441ac:
    // 0x1441ac: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1441acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1441b0:
    // 0x1441b0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1441b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1441b4:
    // 0x1441b4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1441b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1441b8:
    // 0x1441b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1441b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1441bc:
    // 0x1441bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1441c0:
    // 0x1441c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1441c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1441c4:
    // 0x1441c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1441c8:
    // 0x1441c8: 0x60f809  jalr        $v1
label_1441cc:
    if (ctx->pc == 0x1441CCu) {
        ctx->pc = 0x1441CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441C8u;
        // 0x1441cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441D0u;
        goto label_1441d0;
    }
    ctx->pc = 0x1441C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1441D0u);
        ctx->pc = 0x1441CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441C8u;
        // 0x1441cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1441C8u, 0x1441D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1441D0u;
label_1441d0:
    // 0x1441d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1441d4:
    // 0x1441d4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1441d8:
    if (ctx->pc == 0x1441D8u) {
        ctx->pc = 0x1441D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441D4u;
        // 0x1441d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441DCu;
        goto label_1441dc;
    }
    ctx->pc = 0x1441D4u;
    {
        const bool branch_taken_0x1441d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441D4u;
        // 0x1441d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441d4) {
            ctx->pc = 0x144314u;
            goto label_144314;
        }
    }
    ctx->pc = 0x1441DCu;
label_1441dc:
    // 0x1441dc: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1441dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1441e0:
    // 0x1441e0: 0x2457b2e0  addiu       $s7, $v0, -0x4D20
    ctx->pc = 0x1441e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
label_1441e4:
    // 0x1441e4: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x1441e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_1441e8:
    // 0x1441e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1441e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1441ec:
    // 0x1441ec: 0x0  nop
    ctx->pc = 0x1441ecu;
    // NOP
label_1441f0:
    // 0x1441f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1441f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1441f4:
    // 0x1441f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1441f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1441f8:
    // 0x1441f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1441f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1441fc:
    // 0x1441fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_144200:
    // 0x144200: 0x40f809  jalr        $v0
label_144204:
    if (ctx->pc == 0x144204u) {
        ctx->pc = 0x144204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144200u;
        // 0x144204: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144208u;
        goto label_144208;
    }
    ctx->pc = 0x144200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144208u);
        ctx->pc = 0x144204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144200u;
        // 0x144204: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144200u, 0x144208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144208u;
label_144208:
    // 0x144208: 0x8fb30010  lw          $s3, 0x10($sp)
    ctx->pc = 0x144208u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14420c:
    // 0x14420c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_144210:
    // 0x144210: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x144210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_144214:
    // 0x144214: 0x2e41821  addu        $v1, $s7, $a0
    ctx->pc = 0x144214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_144218:
    // 0x144218: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x144218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14421c:
    // 0x14421c: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x14421cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_144220:
    // 0x144220: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
label_144224:
    if (ctx->pc == 0x144224u) {
        ctx->pc = 0x144224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144220u;
        // 0x144224: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144228u;
        goto label_144228;
    }
    ctx->pc = 0x144220u;
    {
        const bool branch_taken_0x144220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x144224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144220u;
        // 0x144224: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144220) {
            ctx->pc = 0x14429Cu;
            goto label_14429c;
        }
    }
    ctx->pc = 0x144228u;
label_144228:
    // 0x144228: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14422c:
    // 0x14422c: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x14422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_144230:
    // 0x144230: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x144230u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_144234:
    // 0x144234: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x144234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_144238:
    // 0x144238: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x144238u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14423c:
    // 0x14423c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x14423cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_144240:
    // 0x144240: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x144240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_144244:
    // 0x144244: 0x24459b10  addiu       $a1, $v0, -0x64F0
    ctx->pc = 0x144244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
label_144248:
    // 0x144248: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_14424c:
    // 0x14424c: 0x27c89b18  addiu       $t0, $fp, -0x64E8
    ctx->pc = 0x14424cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941464));
label_144250:
    // 0x144250: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x144250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_144254:
    // 0x144254: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x144254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_144258:
    // 0x144258: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x144258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_14425c:
    // 0x14425c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14425cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144260:
    // 0x144260: 0x40f809  jalr        $v0
label_144264:
    if (ctx->pc == 0x144264u) {
        ctx->pc = 0x144264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144260u;
        // 0x144264: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144268u;
        goto label_144268;
    }
    ctx->pc = 0x144260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144268u);
        ctx->pc = 0x144264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144260u;
        // 0x144264: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144260u, 0x144268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144268u;
label_144268:
    // 0x144268: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x144268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14426c:
    // 0x14426c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144270:
    // 0x144270: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x144270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_144274:
    // 0x144274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144278:
    // 0x144278: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_14427c:
    // 0x14427c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x14427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_144280:
    // 0x144280: 0x40f809  jalr        $v0
label_144284:
    if (ctx->pc == 0x144284u) {
        ctx->pc = 0x144284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144280u;
        // 0x144284: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144288u;
        goto label_144288;
    }
    ctx->pc = 0x144280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144288u);
        ctx->pc = 0x144284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144280u;
        // 0x144284: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144280u, 0x144288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144288u;
label_144288:
    // 0x144288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14428c:
    // 0x14428c: 0xc051052  jal         func_144148
label_144290:
    if (ctx->pc == 0x144290u) {
        ctx->pc = 0x144290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14428Cu;
        // 0x144290: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144294u;
        goto label_144294;
    }
    ctx->pc = 0x14428Cu;
    SET_GPR_U32(ctx, 31, 0x144294u);
    ctx->pc = 0x144290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14428Cu;
    // 0x144290: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x14428Cu, 0x144294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144294u;
label_144294:
    // 0x144294: 0x10000016  b           . + 4 + (0x16 << 2)
label_144298:
    if (ctx->pc == 0x144298u) {
        ctx->pc = 0x14429Cu;
        goto label_14429c;
    }
    ctx->pc = 0x144294u;
    {
        const bool branch_taken_0x144294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144294) {
            ctx->pc = 0x1442F0u;
            goto label_1442f0;
        }
    }
    ctx->pc = 0x14429Cu;
label_14429c:
    // 0x14429c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1442a0:
    // 0x1442a0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1442a4:
    // 0x1442a4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1442a8:
    // 0x1442a8: 0x40f809  jalr        $v0
label_1442ac:
    if (ctx->pc == 0x1442ACu) {
        ctx->pc = 0x1442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442A8u;
        // 0x1442ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442B0u;
        goto label_1442b0;
    }
    ctx->pc = 0x1442A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1442B0u);
        ctx->pc = 0x1442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442A8u;
        // 0x1442ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1442A8u, 0x1442B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1442B0u;
label_1442b0:
    // 0x1442b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1442b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1442b4:
    // 0x1442b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1442b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1442b8:
    // 0x1442b8: 0x240f809  jalr        $s2
label_1442bc:
    if (ctx->pc == 0x1442BCu) {
        ctx->pc = 0x1442BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442B8u;
        // 0x1442bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442C0u;
        goto label_1442c0;
    }
    ctx->pc = 0x1442B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1442C0u);
        ctx->pc = 0x1442BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442B8u;
        // 0x1442bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1442B8u, 0x1442C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1442C0u;
label_1442c0:
    // 0x1442c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1442c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1442c4:
    // 0x1442c4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1442c8:
    // 0x1442c8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1442cc:
    // 0x1442cc: 0x40f809  jalr        $v0
label_1442d0:
    if (ctx->pc == 0x1442D0u) {
        ctx->pc = 0x1442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442CCu;
        // 0x1442d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442D4u;
        goto label_1442d4;
    }
    ctx->pc = 0x1442CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1442D4u);
        ctx->pc = 0x1442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442CCu;
        // 0x1442d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1442CCu, 0x1442D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1442D4u;
label_1442d4:
    // 0x1442d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1442d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1442d8:
    // 0x1442d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1442d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1442dc:
    // 0x1442dc: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1442dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1442e0:
    // 0x1442e0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_1442e4:
    if (ctx->pc == 0x1442E4u) {
        ctx->pc = 0x1442E8u;
        goto label_1442e8;
    }
    ctx->pc = 0x1442E0u;
    {
        const bool branch_taken_0x1442e0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1442e0) {
            ctx->pc = 0x1442F0u;
            goto label_1442f0;
        }
    }
    ctx->pc = 0x1442E8u;
label_1442e8:
    // 0x1442e8: 0xc055110  jal         func_154440
label_1442ec:
    if (ctx->pc == 0x1442ECu) {
        ctx->pc = 0x1442ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442E8u;
        // 0x1442ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442F0u;
        goto label_1442f0;
    }
    ctx->pc = 0x1442E8u;
    SET_GPR_U32(ctx, 31, 0x1442F0u);
    ctx->pc = 0x1442ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442E8u;
    // 0x1442ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154440u, 0x1442E8u, 0x1442F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442F0u;
label_1442f0:
    // 0x1442f0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1442f4:
    if (ctx->pc == 0x1442F4u) {
        ctx->pc = 0x1442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442F0u;
        // 0x1442f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442F8u;
        goto label_1442f8;
    }
    ctx->pc = 0x1442F0u;
    {
        const bool branch_taken_0x1442f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442F0u;
        // 0x1442f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442f0) {
            ctx->pc = 0x144304u;
            goto label_144304;
        }
    }
    ctx->pc = 0x1442F8u;
label_1442f8:
    // 0x1442f8: 0x280f809  jalr        $s4
label_1442fc:
    if (ctx->pc == 0x1442FCu) {
        ctx->pc = 0x144300u;
        goto label_144300;
    }
    ctx->pc = 0x1442F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x144300u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1442F8u, 0x144300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144300u;
label_144300:
    // 0x144300: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x144300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_144304:
    // 0x144304: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x144304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_144308:
    // 0x144308: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x144308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14430c:
    // 0x14430c: 0x5440ffb8  bnel        $v0, $zero, . + 4 + (-0x48 << 2)
label_144310:
    if (ctx->pc == 0x144310u) {
        ctx->pc = 0x144310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14430Cu;
        // 0x144310: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144314u;
        goto label_144314;
    }
    ctx->pc = 0x14430Cu;
    {
        const bool branch_taken_0x14430c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14430c) {
            ctx->pc = 0x144310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14430Cu;
            // 0x144310: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1441F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1441f0;
        }
    }
    ctx->pc = 0x144314u;
label_144314:
    // 0x144314: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x144314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_144318:
    // 0x144318: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x144318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_14431c:
    // 0x14431c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14431cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_144320:
    // 0x144320: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x144320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_144324:
    // 0x144324: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x144324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_144328:
    // 0x144328: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x144328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14432c:
    // 0x14432c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x14432cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_144330:
    // 0x144330: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x144330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_144334:
    // 0x144334: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x144334u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_144338:
    // 0x144338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14433c:
    // 0x14433c: 0x3e00008  jr          $ra
label_144340:
    if (ctx->pc == 0x144340u) {
        ctx->pc = 0x144340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14433Cu;
        // 0x144340: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144344u;
        goto label_144344;
    }
    ctx->pc = 0x14433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14433Cu;
        // 0x144340: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144344u;
label_144344:
    // 0x144344: 0x0  nop
    ctx->pc = 0x144344u;
    // NOP
    ctx->pc = 0x144348u;
}
